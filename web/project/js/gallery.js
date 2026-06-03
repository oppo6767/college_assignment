// 변수 설정
let header = document.querySelector("header");
let gallary = document.querySelector(".gallery");
let lightbox = document.querySelector("#lightbox");
let lightboximage = document.querySelector("#lightboxImage");
let closebutton = document.querySelector("#closeButton");
let deletebutton = document.querySelector(".del-button");
let confirmDelete = document.querySelector(".confirm-delete");

/* ------------갤럴미 미리보기 관련 함수 ---------- */
// 갤러리 이미지 요소 추가 함수
function createCard(image) {
    let card = document.createElement("div");
    
    // 체크 박스 클릭 표시 이벤트 - AI 도움 받음
    card.addEventListener("click", function(e) {
        if (gallary.classList.contains('delete-mode')) {
            if (e.target === check) return;
            check.checked = !check.checked;
            card.classList.toggle("selected", check.checked);
            return;
        }
        openLightbox(image.url);
    });

    card.className = "cardGallery";

    if (image.size === 1) {
        card.style.gridColumn = "span 1";
        card.style.gridRow = "span 1";
    } else if (image.size === 2) {
        card.style.gridColumn = "span 2";
        card.style.gridRow = "span 1";
    } else {
        card.style.gridColumn = "span 1";
        card.style.gridRow = "span 2";
    }

    let img = document.createElement("img");
    img.src = image.url;
    img.className = "image";

    let text = document.createElement("p");
    text.className = "info-text";
    text.textContent = image.text;

    let check = document.createElement("input");
    check.className = "checkbox";
    check.type = "checkbox";

    // 체크박스 체크 시 표현 이벤트
    check.addEventListener("change", function() {
        card.classList.toggle("selected", check.checked);
    });

    card.appendChild(img);
    card.appendChild(text);
    card.appendChild(check);
    gallary.appendChild(card);
}

// 갤러리 로드 함수 - AI 도움 받음
function loadGallery() {
    let images = JSON.parse(localStorage.getItem("galleryImage")) || [];
    images.forEach(image => createCard(image));
}

// 라이트박스 열기 함수
function openLightbox(imageURL) {
    lightboximage.src = imageURL;
    lightbox.classList.add("active");
}

// 라이트박스 닫기 함수
function closeLightbox() {
    lightbox.classList.remove("active");
}

// 초기 실행
loadGallery();

// 클릭 시 이벤트 
closebutton.addEventListener("click", closeLightbox);

// 삭제 버튼 클릭 시 이벤트 - AI 도움 받음
deletebutton.addEventListener("click", () => {
    gallary.classList.toggle('delete-mode');
    header.classList.toggle('delete-mode');
    
    let delImg = deletebutton.querySelector(".img");
    if (gallary.classList.contains('delete-mode')) {
        delImg.src= "css/image/delbutton.png"
    } else {
        delImg.src= "css/image/delete.png"
    }
});

// 완전한 삭제 클릭 시 이벤트 - AI 도움 받음
confirmDelete.addEventListener('click', () => {
    let selectedCards = document.querySelectorAll('.cardGallery.selected');
    
    // DOM에서 제거
    selectedCards.forEach(card => card.remove());
    
    // localStorage에서도 제거
    let images = JSON.parse(localStorage.getItem('galleryImage')) || [];
    // 남은 카드 기준으로 다시 저장
    let remaining = document.querySelectorAll('.cardGallery img');
    let remainingUrls = Array.from(remaining).map(img => img.src);
    images = images.filter(image => remainingUrls.includes(image.url));
    localStorage.setItem('galleryImage', JSON.stringify(images));
    
    // 삭제 모드 종료
    gallary.classList.remove('delete-mode');
    header.classList.remove('delete-mode');
    deletebutton.querySelector('.img').src = 'css/image/delete.png';
});
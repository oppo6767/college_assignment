// 변수 설정
let gallary = document.querySelector(".gallery");
let lightbox = document.querySelector("#lightbox");
let lightboximage = document.querySelector("#lightboxImage");
let closebutton = document.querySelector("#closeButton");
let deletebutton = document.querySelector(".del-button");

/* ------------갤럴미 미리보기 관련 함수 ---------- */
// 갤러리 이미지 요소 추가 함수
function createCard(image) {
    let card = document.createElement("div");
    card.addEventListener("click", function() {
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

    card.appendChild(img);
    card.appendChild(text);
    gallary.appendChild(card);
}

// 갤러리 로드 함수 - AI 도움 받음
function loadGallery() {
    let images = JSON.parse(localStorage.getItem("galleryImage")) || [];
    images.forEach(image => createCard(image));
}


/*-------- 라이트 박스관련 함수 ----------- */
// 열기 함수
function openLightbox(imageURL) {
    lightboximage.src = imageURL;
    lightbox.classList.add("active");
}

// 닫기 함수
function closeLightbox() {
    lightbox.classList.remove("active");
}

// 초기 실행
loadGallery();

// 클릭 시 실행 종료
closebutton.addEventListener("click", closeLightbox);
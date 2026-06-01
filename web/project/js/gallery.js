let gallary = document.querySelector(".gallery");

// 갤러리 이미지 요소 추가 함수 - 빈 공간 없애기 + 랜덤 후 고정
function createCard(image) {
    let card = document.createElement("div");
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

// 갤러리 로드 함수
function loadGallery() {
    let images = JSON.parse(localStorage.getItem("galleryImage")) || [];
    images.forEach(image => createCard(image));
}

/* 삭제 만들기 */

/* 라이트 박스 만들기 */

// 초기 실행
loadGallery();
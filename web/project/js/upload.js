// 변수 설정
let preview = document.querySelector(".image-preview");
let button = document.querySelector(".push");
let infoText = document.querySelector(".info-text");

/* --------------- 함수 설정 -------------- */
// 미리보기 함수
function loadPreview() {
    let imageURL = localStorage.getItem("uploadImage");
    if (!imageURL) return;

    let img = document.createElement("img");
    img.src = imageURL;
    preview.appendChild(img);
}

// 버튼 클릭 이벤트 함수 - 웹 브라우저 메모리에 저장(AI 도움)
function buttonClick() {
    let imageURL = localStorage.getItem("uploadImage");
    let imageName = localStorage.getItem("uploadImageName");
    if(!imageURL) return;

    let random = Math.floor(Math.random() * 3) + 1;
    let image = JSON.parse(localStorage.getItem("galleryImage")) || [];
    image.push({
        url: imageURL,
        text: infoText.value,
        name: imageName,
        size: random
    });
    localStorage.setItem("galleryImage", JSON.stringify(image));

    // 저장 후 gallery 페이지로 이동
    window.location.href = "gallery.html";
}

// 함수 실행
loadPreview();
button.addEventListener("click", buttonClick);
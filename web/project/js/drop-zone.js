// 변수 설정
let preview = document.querySelector(".image-preview");
let button = document.querySelector(".push");
let infoText = document.querySelector(".info-text");

/* --------------- 함수 설정 -------------- */

// base64ToBlob 선언 - 처음 본 내용이여서 AI 도움 받음
function base64ToBlob(base64) {
    let parts = base64.split(";base64,");
    let type = parts[0].split(":")[1];
    let raw = atob(parts[1]);
    let array = new Uint8Array(raw.length);
    for (let i = 0; i < raw.length; i++) {
        array[i] = raw.charCodeAt(i);
    }
    return new Blob([array], { type });
}

// 미리보기 함수
function loadPreview() {
    let imageURL = localStorage.getItem("uploadImage");
    if (!imageURL) return;

    let img = document.createElement("img");
    img.src = imageURL;
    preview.appendChild(img);
}

// 버튼 클릭 이벤트 함수 - 파일 저장이 거의 서버js만 있어서 일반 JS는 AI 도움 받음
async function buttonClick() {
    let imageURL = localStorage.getItem("uploadImage");
    let imageName = localStorage.getItem("uploadImageName");
    if(!imageURL) return;

    // base64 -> blob 변환
    let blob = base64ToBlob(imageURL);

    // 파일을 디렉토리에 저장하는 함수
    let fileHandle = await window.showSaveFilePicker({
        suggestedName: imageName,
        types: [{
            description: "uploads",
            accept: { "image/*": [".png", ".jpg", ".gif"] }
        }]
    });
    let writable = await fileHandle.createWritable();
    await writable.write(blob);
    await writable.close();

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
/* -----------------------------------------------------*/

// 함수 실행
loadPreview();
button.addEventListener("click", buttonClick);
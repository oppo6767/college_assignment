// 변수 선언
let fileBox=document.querySelector(".file-box");
let Line=document.querySelector("file-content");

// 드래그 함수
function handleDragOver(e) {
    e.preventDefault();
    //드래그 시 파일이 박스 안에 들어왔다고 표시 나중에 추가
}

// 드롭 함수
function handleDrop(e) {
    e.preventDefault();
    let file=e.dataTransfer.files[0];
    if(!file) return;
    if(!file.type.startsWith("image/")) return;

    /* 미리보기 화면으로 이동 - AI 도움 받음 */
    let reader = new FileReader();
    reader.onload = function(e) {
        localStorage.setItem("uploadImage", e.target.result);
        localStorage.setItem("uploadImageName", file.name);
        window.location.href = "drop-zone.html";
    };
    reader.readAsDataURL(file);  /* base64로 변환 - 페이지 이동으로 인해 변환 */
}

// 이벤트 리스너 실행 감지
fileBox.addEventListener("dragover", handleDragOver);
fileBox.addEventListener("drop", handleDrop);
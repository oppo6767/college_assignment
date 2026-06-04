// 변수 선언
let fileBox=document.querySelector(".file-box");
let Line=document.querySelector("file-content");
const CLOUD_NAME = "drv4mxtly";
const UPLOAD_PRESET = "gallery_upload";

// 파일 리사이즈 - AI 도움
async function resizeImage(file) {
    return new Promise((resolve) => {
        let img = new Image();
        let url = URL.createObjectURL(file);
        img.src = url;
        img.onload = function() {
            let canvas = document.createElement('canvas');
            let width = img.width;
            let height = img.height;
            let maxSize = 1200;

            if (width > maxSize || height > maxSize) {
                if (width > height) {
                    height = height * (maxSize / width);
                    width = maxSize;
                } else {
                    width = width * (maxSize / height);
                    height = maxSize;
                }
            }

            canvas.width = width;
            canvas.height = height;
            canvas.getContext('2d').drawImage(img, 0, 0, width, height);
            canvas.toBlob((blob) => resolve(blob), 'image/jpeg', 0.8);
        };
    });
}

// 드래그 함수
function handleDragOver(e) {
    e.preventDefault();
    //드래그 시 파일이 박스 안에 들어왔다고 표시 나중에 추가
}

// 드롭 함수 - AI 도움 받음
async function handleDrop(e) {
    e.preventDefault();
    let file=e.dataTransfer.files[0];
    if(!file) return;
    if(!file.type.startsWith("image/")) return;

    // ObjectURL로 미리보기용 저장
    let objectURL = URL.createObjectURL(file);
    localStorage.setItem("uploadImage", objectURL);
    localStorage.setItem("uploadImageName", file.name);

    // Cloudinary에 업로드
    let formData = new FormData();
    formData.append("file", file);
    formData.append("upload_preset", UPLOAD_PRESET);

    try {
        let response = await fetch(`https://api.cloudinary.com/v1_1/${CLOUD_NAME}/image/upload`, {
            method: "POST",
            body: formData
        });
        let data = await response.json();
        localStorage.setItem("cloudinaryURL", data.secure_url);
        window.location.href = "upload.html";
    } catch(err) {
        console.log("에러:", err);
    }
}

// 이벤트 리스너 실행 감지
fileBox.addEventListener("dragover", handleDragOver);
fileBox.addEventListener("drop", handleDrop);
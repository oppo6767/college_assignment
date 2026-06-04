import { initializeApp } from "https://www.gstatic.com/firebasejs/12.14.0/firebase-app.js";
import { getFirestore, collection, addDoc } from "https://www.gstatic.com/firebasejs/12.14.0/firebase-firestore.js";

const firebaseConfig = {
    apiKey: "AIzaSyDmEpjFAG8Q72C0dUR4fojlurJulrUbz2U",
    authDomain: "dbtest-898ea.firebaseapp.com",
    projectId: "dbtest-898ea",
    storageBucket: "dbtest-898ea.firebasestorage.app",
    messagingSenderId: "1014378933403",
    appId: "1:1014378933403:web:3a542a5eb2ae2655bb2a3e"
};

// 변수 설정
const app = initializeApp(firebaseConfig);
const db = getFirestore(app);
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
async function buttonClick() {
    let cloudURL = localStorage.getItem("cloudinaryURL");
    let imageName = localStorage.getItem("uploadImageName");
    if(!cloudURL) return;

    let random = Math.floor(Math.random() * 3) + 1;
    await addDoc(collection(db, "gallery"), {
        url: cloudURL,
        text: infoText.value,
        name: imageName,
        size: random
    });

    // 저장 후 gallery 페이지로 이동
    window.location.href = "gallery.html";
}

// 함수 실행
loadPreview();
button.addEventListener("click", buttonClick);
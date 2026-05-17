// original: https://codepen.io/BrianCross/pen/PoWapLP
// horizontal version: https://codepen.io/GreenSock/pen/xxWdeMK
// 원작자가 GSAP로 작성하여 이부분은 아직 모르는 것도 있어서 AI한테 도움을 받으면서 JS로 코드 변경

// 변수 설정
var sections = document.querySelectorAll("section");
var images = document.querySelectorAll(".bg");
var headings = Array.from(document.querySelectorAll(".section-heading"));
var outerWrappers = Array.from(document.querySelectorAll(".outer"));
var innerWrappers = Array.from(document.querySelectorAll(".inner"));
var currentIndex = -1;
var animating;

// 글자 배열로 분리
var charsets = [];
var hSpan, hText, hChars;

for (let hi = 0; hi < headings.length; hi++) {
    hText = headings[hi].textContent;
    hChars = [];

    headings[hi].textContent = "";

    for (let hj = 0; hj < hText.length; hj++) {
        hSpan = document.createElement("span");

        if (hText[hj] === " ") {
            hSpan.innerHTML = "&nbsp;";
            hSpan.style.display = "inline";
        } else {
            hSpan.className = "char";
            hSpan.textContent = hText[hj];
            hChars.push(hSpan);
        }
        headings[hi].appendChild(hSpan);
    }
    charsets.push(hChars);
}

// 화면 초기 설정 화면
for (let oi = 0; oi < outerWrappers.length; oi++) {
    outerWrappers[oi].style.transform = "translateY(100%)";
}

for (let li = 0; li < innerWrappers.length; li++) {
    innerWrappers[li].style.transform = "translateY(-100%)";
}

// 섹션 이동 함수
function gotoSection(index, direction) {
    index = ((index % sections.length) + sections.length) % sections.length;
    animating = true;

    // 방향 결정
    let dFactor = (direction === -1) ? -1 : 1;

    // 이전 섹션 보내기
    if (currentIndex >= 0) {
        sections[currentIndex].style.zIndex = "0";
        images[currentIndex].style.transition = "transform 1.25s ease-in-out";
        images[currentIndex].style.transform = "translateY(" + (-15 * dFactor) + "%)";
        
        let prevIndex = currentIndex;
        setTimeout(function () {
            sections[prevIndex].style.visibility = "hidden";
        }, 1250);
    }

    // 새 섹션 시작 위치 설정
    sections[index].style.zIndex = "1";
    sections[index].style.visibility = "visible";

    outerWrappers[index].style.transition = "none";
    innerWrappers[index].style.transition = "none";
    images[index].style.transition = "none";

    outerWrappers[index].style.transform = "translateY(" + (100 * dFactor) + "%)";
    innerWrappers[index].style.transform = "translateY(" + (-100 * dFactor) + "%)";
    images[index].style.transform = "translateY(" + (15 * dFactor) + "%)";

    var chars = charsets[index];
    for (let ci = 0; ci < chars.length; ci++) {
        chars[ci].style.transition = "none";
        chars[ci].style.opacity = "0";
        chars[ci].style.transform = "translateY(" + (150 * dFactor) + "%)";
    }

    // 애니메이션 실행
    requestAnimationFrame(function () {
        requestAnimationFrame(function () {
            outerWrappers[index].style.transition = "transform 1.25s ease-in-out";
            innerWrappers[index].style.transition = "transform 1.25s ease-in-out";
            images[index].style.transition = "transform 1.25s ease-in-out";       
            outerWrappers[index].style.transform = "translateY(0%)";
            innerWrappers[index].style.transform = "translateY(0%)";
            images[index].style.transform = "translateY(0%)";

            // 글자 애니메이션 실행
            let shuffled = chars.slice().sort(function () { return Math.random() - 0.5; });
            for (let si = 0; si < shuffled.length; si++) {
                (function (char, delay) {
                    setTimeout(function () {
                        char.style.transition = "opacity 1s ease, transform 1s ease"; 
                        char.style.opacity = "1";
                        char.style.transform = "translateY(0%)";
                    }, 200 + delay);
                })(shuffled[si], si * 20);
            }

            // 애니메이션 해제
            outerWrappers[index].addEventListener("transitionend", function () {
                animating = false;
            }, { once: true });
        });
    });

    currentIndex = index;
}

// 이벤트 리스너 - 휠
window.addEventListener("wheel", function (e) {
    e.preventDefault();
    if (animating) return;
    if (Math.abs(e.deltaY) < 10) return;

    if (e.deltaY > 0) {
        gotoSection(currentIndex + 1, 1);
    } else {
        gotoSection(currentIndex - 1, -1);
    }
}, { passive: false });

// 이벤트 리스너 - 포인터(마우스 드래그)
var pointerStartY = 0;

window.addEventListener("pointerdown", function (e) {
    pointerStartY = e.clientY;
});

window.addEventListener("pointerup", function (e) {
    let dy = pointerStartY - e.clientY;
    if (animating) return;
    if (Math.abs(dy) < 10) return;

    if (dy > 0) {
        gotoSection(currentIndex + 1, 1);
    } else {
        gotoSection(currentIndex - 1, -1);
    }
});

gotoSection(0, 1);
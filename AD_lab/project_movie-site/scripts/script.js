document.querySelector('.user1').addEventListener('click', function () {
    const menu = document.querySelector('.dropdown-menu');
    menu.style.opacity = menu.style.opacity === "1" ? "0" : "1";
    menu.style.visibility = menu.style.visibility === "visible" ? "hidden" : "visible";
});

const sliderItems = document.querySelectorAll('.slider-item');
let currentSlide = 0;


sliderContainer.addEventListener('mouseenter', () => {
    clearTimeout(hideNavTimeout); // Reset the timer if the user hovers
    const sliderNav = document.querySelector('.slider-nav');
    sliderNav.style.opacity = 1; // Show the buttons when hovering
});

sliderContainer.addEventListener('mouseleave', () => {
    hideNavTimeout = setTimeout(() => {
        const sliderNav = document.querySelector('.slider-nav');
        sliderNav.style.opacity = 0; // Hide the buttons after 3 seconds
    }, 3000);
});


document.addEventListener("DOMContentLoaded", function () {
    const player = new Plyr("#player");

    function goFullscreen() {
        const videoContainer = player.elements.container;

        // Request fullscreen
        if (videoContainer.requestFullscreen) {
            videoContainer.requestFullscreen();
        } else if (videoContainer.webkitRequestFullscreen) {
            videoContainer.webkitRequestFullscreen();
        } else if (videoContainer.mozRequestFullScreen) {
            videoContainer.mozRequestFullScreen();
        } else if (videoContainer.msRequestFullscreen) {
            videoContainer.msRequestFullscreen();
        }

        // Lock orientation to landscape
        if (screen.orientation && screen.orientation.lock) {
            screen.orientation.lock("landscape").catch(error => {
                console.warn("Orientation lock failed:", error);
            });
        }
    }

    player.on("play", function () {
        if (window.innerWidth < 768) { // Mobile devices
            goFullscreen();
        }
    });

    document.addEventListener("fullscreenchange", function () {
        if (!document.fullscreenElement) {
            if (screen.orientation && screen.orientation.unlock) {
                screen.orientation.unlock();
            }
        }
    });
});



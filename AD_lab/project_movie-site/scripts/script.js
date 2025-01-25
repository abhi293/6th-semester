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


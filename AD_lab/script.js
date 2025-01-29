document.addEventListener("DOMContentLoaded", function () {
    const player = new Plyr("#player");

    // Detect fullscreen change
    function handleFullscreenChange() {
        if (document.fullscreenElement || document.webkitFullscreenElement) {
            // Lock screen to landscape
            if (screen.orientation && screen.orientation.lock) {
                screen.orientation.lock("landscape").catch(error => {
                    console.warn("Orientation lock failed:", error);
                });
            }
        } else {
            // Unlock when exiting fullscreen
            if (screen.orientation && screen.orientation.unlock) {
                screen.orientation.unlock();
            }
        }
    }

    // Listen for fullscreen events
    document.addEventListener("fullscreenchange", handleFullscreenChange);
    document.addEventListener("webkitfullscreenchange", handleFullscreenChange);

    // Manually request fullscreen when clicking play (for iOS support)
    player.on("play", function () {
        if (window.innerWidth < 768) { // Mobile only
            const videoContainer = player.elements.container;
            if (videoContainer.requestFullscreen) {
                videoContainer.requestFullscreen();
            } else if (videoContainer.webkitRequestFullscreen) {
                videoContainer.webkitRequestFullscreen();
            }
        }
    });
});

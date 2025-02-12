const ITERATIONS_MAX = 5;
let iteration = 0;

const timeout = setInterval(() => {
    if (iteration >= ITERATIONS_MAX) {
        // Kill the interval timer
        console.log("max_timer_reached i.e 10ms")
       clearInterval(timeout);
    }
    iteration++;
}, 10); //10ms

let timeoutId;

function repeatWithDelay() {
    console.log("Executed with delay");

    timeoutId = setTimeout(repeatWithDelay, 2000); // Store the ID
}

// Start function
repeatWithDelay();

// Stop after 4 seconds
setTimeout(() => {
    clearTimeout(timeoutId);
    console.log("Stopped execution after 4s");
}, 4000);


//setInterval(callback, delay[, ...args])

function runTask() {
    let startTime = new Date(); // Capture start time
    console.log("Start Time:", startTime.toLocaleTimeString());
    let c=0
    // Simulate some work with setTimeout (e.g., 3 seconds)
    const timeout1 =  setTimeout(() => {
        let endTime = new Date(); // Capture end time
        console.log("End Time:", endTime.toLocaleTimeString());
        c++
    }, 3000); //infinite loop , with a delay of 3s
}
runTask()


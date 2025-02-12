function runTask() {
    let start = performance.now(); // Start time

    // Simulate some work (e.g., a loop)
    for (let i = 0; i < 1e6; i++) {
        Math.sqrt(i); // Some computation
    }

    let end = performance.now(); // End time
    console.log(`Execution Time: ${(end - start).toFixed(2)} ms`);
}

runTask();

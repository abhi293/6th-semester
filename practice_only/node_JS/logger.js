const startTime = process.hrtime(); // Capture start time with high precision

module.exports = {
    log: (level, functionName, message) => {
        const elapsedTime = process.hrtime(startTime); // Get elapsed time
        const elapsedMs = (elapsedTime[0] * 1000 + elapsedTime[1] / 1e6).toFixed(6); // Convert to ms with 6 decimals
        const timestamp = Date.now(); // Current timestamp in ms
        console.log(`${timestamp}:${level}:${functionName}(): ${message} (elapsed time: ${elapsedMs}ms)`);
    },
    
    info: (functionName, message) => {
        module.exports.log('INFO', functionName, message);
    },

    debug: (functionName, message) => {
        module.exports.log('DEBUG', functionName, message);
    }
};

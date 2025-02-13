module.exports = {
    info: (message, phase) => {
        const timestamp = new Date().toISOString();
        console.log(`[${timestamp}] [${phase}] ${message}`);
    }
};

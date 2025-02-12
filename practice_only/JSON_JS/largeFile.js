//this.(function_name,Class_name,variable_name) = function(){}; // this is used to export multiple functions, classes, and variables
//module.exports = this; // Exports everything automatically


this.add = function(a, b) {  // this.add is a method of the object that is being exported
    return a + b;
};

this.subtract = function(a, b) {
    return a - b;
};

this.Calculator = class {
    multiply(a, b) {
        return a * b;
    }
};

this.PI = 3.14159;

module.exports = this; // Exports everything automatically

const anotherFile = require("./anotherFile");  //anotherFile.js is imported, which implicitly re-exports largeFile.js

//can also be called like const {add, subtract} = require("./anotherFile"); // Importing specific functions
//or const largeFile = require("./largeFile"); // Importing the entire file

console.log(anotherFile.add(10, 2)); // Output: 12
console.log(anotherFile.subtract(10, 2)); // Output: 8
const test = require("./test.json") // Importing JSON file, automatically implements JSON.parse
const fs = require("fs") // Importing file system module
console.log(test)// Print the parsed object

console.log("accessing specific details from JSON file"+"\nFirst Employee FirstName : "+test.employees[0].firstName+"\nSecond Employee LastName : "+test.employees[1].lastName)

test.employees[0].age=30 //updating values in JSON file from JS

//writing the updated JSON object to the file along with error handling
fs.writeFile("D:/6th-sem/practice_only/JSON_JS/test.json", JSON.stringify(test), (err) => {
    if (err) {
        console.error("Error writing to file", err);
    } else {
        console.log("JSON file has been updated successfully!");
    }
});

//fs.writeFileSync("D:/6th-sem/practice_only/JSON_JS/test.json", JSON.stringify(test)) //writing the updated JSON object to the file

////read the json file as a string and then parse it (same work)
// const data = fs.readFileSync("D:/6th-sem/practice_only/JSON_JS/test.json", "utf8")
// const parsedData = JSON.parse(data);
//// Print the parsed object
// console.log(parsedData);

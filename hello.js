// Basic Syntax
console.log("Hello, World!");

//Link to HTML
<script src="app.js"></script>

//Variables
var a = 10;   //old
let b = 20;   //mutable
const c = 30; //immutable

//Data Types
let name = "Krishna"; //String
let age = 25;
let isStudent = true; //Boolean
let hobbies = ["coding", "music", "travel"]; //Array
let person = { name: "Krishna", age: 25 }; //Object
let x = null; //Null
let y; //Undefined

//Functions
function greet(name) {
    return "Hello, " + name + "!";
}
console.log(greet("Krishna"));

//Operators
let a  = 10, b = 5;
console.log(a + b);
console.log(a - b);
console.log(a * b);
console.log(a / b);
console.log(a % b);

//comaparison operators
console.log(a == b);
console.log( a != b);
console.log( a > b);
console.log( a < b);
console.log( a >= b);
console.log( a <= b);

//Logical Operators
let isAdult = age >= 18;
let hasID = true;
console.log(isAdult && hasId);
console.log(isAdult || hasId);
console.log(!isAdult);

//Control Structures
if (age >= 18) {
    console.log("You are an adult.");
}
else {
    console.log("You are a minor.");
}
elif (age >= 13) {
    console.log("You are a teenager.");
}
else {
    console.log("You are a child.");
}

//Loops
for (let i = 0; i < 5; i++) {
    console.log(i);
}

let j = 0;
while (j < 5) {
    console.log(j);
    j++;
}

do {
    console.log(j);
    j++;
} while (j < 5);

//Switch Case
let day = 3;
switch (day) {
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
        case 4:
            console.log("Thursday");
            break;
            case 5:
                console.log("Friday");
                break;
                case 6:
                    console.log("Saturday");
                    break;
                    case 7:
                        console.log("Sunday");
                        break;
                        default:
                            console.log("Invalid day");
}


//Error Handling
try {
  x();
} catch(e) {
  console.log(e);
} finally {}
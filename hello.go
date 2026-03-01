//Hello World
package main
import "fmt"

func main() {
	fmt.Println("Hello, World!");
}
// This is a simple Go program that prints "Hello, World!" to the console.
// To run this program, save it in a file named hello.go and use the command `go run hello.go`.

// To compile this program, you can use the command `go build hello.go`.
// This will create an executable file named hello in the same directory.
// You can then run the executable with `./hello` on Unix-like systems or `hello.exe` on Windows.

// The program uses the fmt package to handle formatted I/O operations.
// The main function is the entry point of the program, where execution starts.
// The Println function is used to print the string to the standard output, followed by a newline character.

// This code is a basic example of how to write and run a Go program.
// It demonstrates the syntax for package declaration, import statements, and the main function structure.
//package main- entry package
//func main() - main function, the entry point of the program
//fmt.Println - function to print output to the console
//"Hello, World!" - the string that will be printed
//; - statement terminator in Go, though optional in most cases
//To run this code, you need to have Go installed on your machine.
//You can download it from https://golang.org/dl/ and follow the installation instructions.

// This code is a complete, self-contained Go program that can be executed directly.
// It serves as a basic introduction to the Go programming language and its syntax.

// Note: Ensure that your Go environment is set up correctly before running this code.
// You can check your Go installation by running `go version` in your terminal or command prompt.	
// If you see the version information, your Go installation is working correctly.
// If you encounter any issues, refer to the official Go documentation for troubleshooting steps.	
// This code is a simple demonstration of how to write a basic program in Go.

//Variables in Go
var name string = "Krishna"
var age int = 19;
// This code declares two variables: name and age.
//Type interface
var city = "Pune"
//Short syntax
country := "India"
//Only inside functions

//Data Types
int, int8, int16, int32, int64
uint, uintptr
float32, float64
complex64, complex128
bool
string
byte (alias for uint8)
rune (alias for int32, represents a Unicode code point)

//Constants
const Pi = 3.14
const Greeting = "Hello"

//Constants
const PI = 3.14
const name string = "Krishna"
//Multiple constants
const (
	A = 1
	b = 2
	c = 3
	d = 4
)

//Printing / Formatting
fmt.Print("Hello World!") // Prints without newline
fmt.Println("Hello World") //Prints with newline
fmt.Println("Hello", World!") // Prints with space") 
fmt.Printf("Hello %s", "World") //Formatted output
fmt.Printf("AGe: %d", 19)
//Common Verbs
%d- integer
%f-float
%s-string
%t-boolean
%c-character
%v-default format
%T-type of value
%p-pointer address

//Input
var name stringfmt.Scanln(&name) // Reads input from the user
fmt.Scanln(&name)

//Operators
//Arithmetic Operators
+ - * / %
//Relational Operators
== != < > <= >=

//Logical Operators
&& (AND) || (OR) ! (NOT)

//Bitwise Operators
& (AND) | (OR) ^ (XOR) << (left shift) >> (right shift)

//Assignment Operators
= += -= *= /= %= &= |= ^= <<= >>=

//Increment/Decrement Operators
++ --

//Ternary Operator
// Go does not have a ternary operator like C/C++.
// Instead, you can use if-else statements for conditional assignments.

// IF/Else
if age >= 19 {
	fmt.Println("ADult")
}
else {
	fmt.Println("Not Adult")
}
//with init:
if x := 10; x > 5 {
	fmt.Println(x)
}

//Switch
day := 2
switch day {
	case1:
	fmt.Println("Monday")
	case2:
	fmt.Println("Tuesday")
	case3:
	fmt.Println("Wednesday")
default:
	fmt.Println("Invalid day")
}
//No break needed.

//Loops (Only for exists)
//Basics
for i := 0; i < 5; i++ {
	fmt.Println(i)
}

//While loop
i := 0
for i < 5 {
	i++
}

//Infinite loop
for {
	fmt.Println("Infinite loop")
	if i >= 5 {
		break // Breaks the loop when i reaches 5
	}
	i++
}

//Arrays
var arr [3]int = [3]int{1,2,3}
//Short
arr := [3]int{1,2,3}
//Short with type inference
arr := [...]int{1, 2, 3} // Compiler infers the size

//Slices
var slice []int = []int{1,2,3}
//Short:
arr:= [3]int{1,2,3}
//Access(Dynamic arrays):
nums := []int{1,2,3}
//Append
nums = append(nums, 4)
//Slice:
nums[0:2]
//Length/capacity:
len(nums)
cap(nums)

//Maps(Hashmaps)
var m map[string]int = map[string]int{"a": 1, "b": 2}
//Short:
m := map[string]int{"a": 1, "b": 2}
//Access:
value := m["a"] //Get value for key "a"
//Add/Update:
m["c"] = 3 //Add key "c" with value 3
//Delete:
delete(m, "b") //Remove key "b"

//Structs
type Person struct {
	Name string
	Age int
}

func main() {
	p := Person{Name: "Krishna", Age: 19}
	firstName := p.Name //Accessing struct field
	fmt.Println("Name:", firstName)
	fmt.Println("Age:", p.Age
	)
}

//Methods
type Circle struct {
	Radius float64
}

func (c Circle) Area() float64 {
	return 3.14 * c.Radius * c.Radius
}

func main() {
	c := Circle(Radius: 5.0)
	area := c.Area() //Calling method on struct
	fmt.Println("Area of Circle:", area)
}

//Channels
ch := make(chan string) //Create a channel of type string
go func() {
	ch <- "Hello from goroutine" //Send value to channel
} ()

msg := <-ch  //Receive value from channel
//Buffered channels
ch := make(chan int, 2) //Buffered channel with capacity 2
ch <- 1 //Send value to channel
ch <- 2 //Send another value
//Receive values
val1 := <-ch
val2 := <-ch
fmt.Println("Received:", val1, val2)

//Select 
select msg := <-ch1:
    fmt.Println("Recived from channel 1:", msg)
case msg := <-ch2;
    fmt.Println("Received from channel 2:", msg)
default:
	fmt.Println("No messages received")

//Error Handling
val, err := strconv.Atoi(10") //Convert string to integer
if err != nil {
fmt.Println("Error converting string to integer:", err)")
} else {
	fmt.Println("Converted value:", val)
}

//Defer
defer fmt.Println("End")

//Panic and Recover
panic("Crash") //Trigger a panic

//Recover from panic
defer func() {
	if r:= recover ();
	r! = nil {
		fmt.Println("Recovered from panic:", r)
	}
}

//Packages
package mathutils
//Exported function (starts with uppercase)
func Add(a, b int) int {
	return a + b
}

//Importing package
import "mathutils"

//Type Conversion
var x int = 10
var y float64 = float64(x)

//Generics (Go 1.18+)
func PrintSlice[T any](val T) {
	fmt.Println(val)
}

//File Handling
data, err := os.ReadFile("file,txt") //Read file content
if err != nil {
	fmt.Println("Error reading file:", err)
} else {
	fmt.Println("File content:", string(data))
}

//Writing to a file
os.WriteFile("file.txt",data, 0644) //Write data to file with permissions

//JSON Handling
jsonData := `{name": ""Krishna", "age": 19}`
var person Person
err := json .Unmarshal([]byte(jsonData), &person) //Parse JSON into struct
if err != nil {
	fmt.Println("Error parsing JSON:", err)
}
else {
	fmt.Println("name:", person.Name)
	fmt.Println("Age:", person.Age)
}

// HTTP Server
http.HandleFUnc("/", func(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintln(w, "Hello")
})

http.ListenAndServe(":8080", nil)

//Modules
go mod init projectname

//Install
go get package

//Build and run
go run main.go
go build


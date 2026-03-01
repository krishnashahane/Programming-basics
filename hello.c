//Hello World

#include <stdio.h>
int main() {
    printf("Hello Krishna!");
    return 0;
}
//This code is a simple C program that prints "Hello Krishna" to the console. It includes the standard input/output library, defines the main function, and uses the printf function to display the message. Finally, it returns 0 to indicate that the program has finished successfully.     
//To compile and run this code, you can use a C compiler like gcc. Here are the steps:
//1. Save the code in a file named hello.c.
//2. Open a terminal and navigate to the directory where the file is located.
//3. Compile the code using the command: gcc hello.c -o hello
//4. Run the compiled program using the command: ./hello
//You should see the output "Hello Krishna!" in the terminal.
//#include-libraries
//main-function(entry-point)
//print-function
//;-mandatory

//variables
int a = 10; //integer variable
float b = 3.14; //floating-point variable
char c = 'A'; //character variable
//declaration of variables with initialization
//a is an integer variable initialized to 10
//b is a floating-point variable initialized to 3.14
//c is a character variable initialized to 'A'
int x;
x = 5;

//Data Types in C
//1. int: Used to store integer values (e.g., 1, -5, 100).
//2. float: Used to store single-precision floating-point numbers (e.g., 3.14, -0.001).
//3. double: Used to store double-precision floating-point numbers (e.g., 3.14159, -0.00001).
//4. char: Used to store a single character (e.g., 'A', 'b', '1').
//5. void: Represents the absence of a value or a function that does not return a value.
//6. _Bool: Used to store boolean values (true or false).
//7. short: Used to store smaller integer values (e.g., -32768 to 32767).
//8. long: Used to store larger integer values (e.g., -2147483648 to 2147483647).
//9. long long: Used to store even larger integer values (e.g., -9223372036854775808 to 9223372036854775807).

//Modifiers in C
//1. signed: Indicates that a variable can hold both positive and negative values (default for int).
//2. unsigned: Indicates that a variable can only hold non-negative values (e.g ., unsigned int).       
//short - used to store smaller integer values (e.g., -32768 to 32767).
//long - used to store larger integer values (e.g., -2147483648 to 2147483647).
//long long - used to store even larger integer values (e.g., -9223372036854775808 to 9223372036854775807). 
//The modifiers signed and unsigned can be applied to integer types to specify whether they can hold negative values or not. For example, an unsigned int can only hold non-negative values, while a signed int can hold both positive and negative values.
//example- unsigned int age = 25; // This variable can only hold non-negative values

//Input/Output-
printf("Age: %d", age); // Output the value of age
scanf("%d", &age); //Read an integer value from the user and store if in the variables age.  The %d formatting specifier is used to indicate that the input is an integer, and the & operator is used to pass the address of the age variable to scanf, allowing it to storee input value in variable.

//Format Specifiers
%d - int
%f - float
%lf - double
%c - char
%s - string

//Operators in C
//1. Arithmetic Operators: +, -, *, /, %
//2. Relational Operators: ==, !=, >, <, >=, <=
//3. Logical Operators: &&, ||, !
//4. Assignment Operators: =, +=, -=, *=, /=, %=
//5. Increment and Decrement Operators: ++, --
//6. Bitwise Operators: &, |, ^, ~, <<, >>
//7. Ternary Operator: ? :
// Arithmetic operators are used to perform mathematical operations on variables and values. For example, the + operator is used for addition, while the - operator is used for subtraction. The * operator is used for multiplication, and the / operator is used for division. The % operator is used to find the remainder of a division operation.
// Relational operators are used to compare two values and return a boolean result (true or false       
// Logical operators are used to combine multiple conditions and return a boolean result. The && operator represents logical AND, the || operator represents logical OR, and the ! operator represents logical NOT.
// Assignment operators are used to assign values to variables. The = operator is used for simple assignment, while the +=, -=, *=, /=, and %= operators are used for compound assignment,
// Increment and decrement operators are used to increase or decrease the value of a variable by 1. The ++ operator is used for incrementing, while the -- operator is used for decrementing.
// Bitwise operators are used to perform bit-level operations on integer values. The & operator represents bitwise AND, the | operator represents bitwise OR, the ^ operator represents bitwise XOR, the ~ operator represents bitwise NOT, and the << and >> operators represent left and right bit shifts respectively.
// The ternary operator is a shorthand for an if-else statement. It takes three operands and is used to evaluate a condition and return one of two values based on the result. The syntax is: condition ? value_if_true : value_if_false. For example, int result = (age >= 18) ? 1 : 0; // This will set result to 1 if age is greater than or equal to 18, and 0 otherwise.

//If/Else Statements
if(Age >= 19) {
    printf("You are an adult.");
}
else {
    printf("You are a minor.");
}
elif {
    printf("You are a teenager.");
}

//Nested Loop
if(a>0){
    if(a%2==0){}
}

//Switch
switch(day){
    case1: printf("Monday");
    break;
    case2: printf("Tuesday");
    break;
    case3: printf("Wednesday");
    break;
    case4: printf("Thursday");
    break;
    case5: printf("Friday");
    break;
    case6: printf("Saturday");
    break;
    case7: printf("Sunday");
    break;
}
//Switch statements are used to perform different actions based on different conditions. The switch statement evaluates an expression and compares it against a list of cases. Each case represents a possible value of the expression, and if a match is found, the corresponding block of code is executed. The break statement is used to exit the switch block after a case has been executed, preventing the execution of subsequent cases. If no match is found, the default case can be executed if it is defined.


//Loops
//for loop
for(int i=0; i<5; i++){
    printf("%d", i);
}
//For loop- loop in C is a control flow statement used for executing a block of code repeatedly a specific number of times.

//While loop
int i = 0;
while(i<5){
    i++;
    printf("%d", i);
}
//While loop- loop in C is a control flow statement that allows code to be executed repeatedly based on a given boolean condition. The loop continues to execute as long as the condition is true.

//Do-While loop
//Do-While loop
    int i = 0;
    do {
        i++;
        printf("%d", i);
    }
    while(i<5);
//Do-While loop- loop in C is a control flow statement that executes a block of code at least once, and then repeatedly executes the block as long as a given boolean condition is true. The key difference between a do-while loop and a while loop is that the do-while loop guarantees that the code block will be executed at least once, even if the condition is false from the beginning.

//Arrays
int numbers[5] = {1, 2, 3, 4, 5};
//Arrays in C are a collection of elements of the same data type stored in contiguos memory locations. They are used to store multiple values in a single variable. The syntax for declaring a array is: data_type array_name(array_size): For example, int numbers[5] declares an array of integers with a size of 5. The elements of the array can be accessed using their index starting from 0. For example, numbers[0] will access the first element of the array, which is 1, and numbers[4] will access the last element, which is 5. Arrays can also be initialized at the time of declaration, as shown in the example above.
int arr[5] = {1,2,3,4,5};
printf("%d", arr[0]); // Output: 1
//This code declares an array of integers named arr with a size of 5 and initializes it with the values 1, 2, 3, 4, and 5. The

//2D Arrays
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}

//2D arrays in C are a collection of elements arranged in a grid or table format. They are used to store data in a two-dimensional structure, where each element is accessed using two indices: one for the row and one for the column. The syntax for declaring a 2D array is: data_type array_name[row_size][column_size]. For example, int matrix[3][3] declares a 2D array of integers with 3 rows and 3 columns. The elements of the 2D array can be accessed using their row and column indices. For example, matrix[0][0] will access the first element of the first row, which is 1, and matrix[2][2] will access the last element of the last row, which is 9. 2D arrays can also be initialized at the time of declaration, as shown in the example above.
 //This code declares a 2D array of integers named matrix with 3 rows and 3 columns, and initializes it with the values from 1 to 9. The elements of the array can be accessed using their row and column indices. For example, matrix[0][0] will access the first element of the first row, which is 1, and matrix[2][2] will access the last element of the last row, which is 9.

 //3D Arrays
 int cube[2][2][2] = {
    {
        {1}, {2}
    },
    {
        {3}, {4}
    },
    {
        {5}, {6}
    },
    {
        {7}, {8}
    }
 }

//Strings
char name[] = "Krishna";
//Strings in C are a sequence of characters terminated by a null character '\0'. They are used to store and manipulate text. In C, strings are represented as arrays of characters. The syntax for declaring a string is: char string_name[string_size]. For example, char name[] = "Krishna" declares a string named name and initializes it with the value "Krishna". The size of the string is determined by the number of characters in the string plus one for the null character. The elements of the string can be accessed using their index starting from 0. For example, name[0] will access the first character of the string, which is 'K', and name[6] will access the last character, which is 'a'. Strings can also be manipulated using various string functions provided in the string.h library, such as strlen() to get the length of the string     
//Functions:
strlen(name); // This function returns the length of the string "Krishna", which is 7 (excluding the null character).
strcpy(destination, source); // This function copies the contents of the source string to the destination
strcat(destination, source); //This function concatenates the source string to the end of the destination string.
strcmp(string1, string2); //This function compares two strings and returns an integer value based on the result. It returns 0 if the strings are equal, a positive value if string1 is greater than string2, and a negative value if string1 is less than string2.

//Libraries:
//1. stdio.h: Standard Input/Output library for functions like printf and scanf.
//2. stdlib.h: Standard Library for functions like malloc, free, and exit.
//3. string.h: String handling library for functions like strlen, strcpy, strcat, and strcmp.
//4. math.h: Math library for functions like sqrt, pow, and sin.
//5. time.h: Time library for functions like time, clock, and difftime. 

//Functions in C:
int add(int a,int b) {
    return a + b;
}
//Functions in C are blocks of code that perform a specific task and can be reused throughout the program. They are defined with a return type, a name, and a list of parameters (if any). The syntax for defining a function is: return_type function_name(parameter_list) { // function body }. For example, the function add takes two integer parameters a and b, and return their sum.

//Call:
int x = add(2,3);
//This code calls the add function with the arguments 2 and 3, and assigns the result to the variable x. The add function will return the sum of 2 and 3, which is 5, so x will be assigned the value 5.

//Recursion:
int factorial(int n) {
    if(n==0) return 1;
    return n*factorial(n-1);
}

//Pointers:
int x = 10;
int *p = &x;
printf("%d", &p);

//Pointers in C are variables that store the memory address of another variable. They are used to manipulate data indirectly and to create dynamic data structures. The syntax for declaring a pointer is: data_type *pointer_name. For example, int *p declares a pointer to an integer. The & operator is used to get the address of a variable, and the * operator is used to dereference a pointer to access the value stored at that address. In the example above, p is a pointer that stores the address of the variable x, which has a value of 10. The expression &p will give the address of the pointer itself, while *p will give the value stored at the address pointed to by p, which is 10. 
//Pointer arithmetic allows you to perform operations on pointers, such as incrementing or decrementing the pointer to move to the next or previous memory location. For example, if p is a pointer to an integer, p++ will move the pointer to the next integer in memory, and p-- will move it to the previous integer. Pointer arithmetic is based on the size of the data type that the pointer is pointing to. For example, if p is a pointer to an integer (which typically has a size of 4 bytes), then p++ will increase the address stored in p by 4 bytes, effectively moving to the next integer in memory.
p++; // This will move the pointer p to the next integer in memory, which is 4 bytes away from the current address stored in p. 

//Pointers+Arrays:
int arr[5] = {1,2,3,4,5};
int *p = arr; // This initializes the pointer p to point to the first element of
printf("%d", *(p+1)); // This will output the value of the second element of the array, which is 2. The expression *(p+1) dereferences the pointer p after incrementing it by 1, effectively accessing the second element of the array.

//Structures:
struct Person p1;
p1.age = 19;
//Structures in C are user-defined data types that allow you to group different types of variables together under a single name. They are defined using the struct keyword, followed by the structure name and a block of code that contains the member variables. For example, struct Person { char name[50]; int age; }; defines a structure named Person with two member variables: name (a string) and age (an integer). You can create instances of the structure and access its members using the dot operator. In the example above, p1 is an instance of the Person structure, and p1.age = 19 assigns the value 19 to the age member of p1.

//Unions:
union Data{
    int i;
    float f;
    char str[19];
};
//Unions in C are similar to structures, but they can only store one member at a time. They are defined using the union keyword, followed by the union name and a block of code that contains the member variables. For example, union Data { int i; float f; char str[19]; }; defines a union named Data with three member variables: i (an integer), f (a float), and str (a string). You can create instances of the union and access its members using the dot operator. However, since a union can only store one member at a time, assigning a value to one member will overwrite the values of the other members. In the example above, if you assign a value to i, it will overwrite any value stored in f or str, and vice versa.
//Shared memory- Unions are used to save memory by allowing different types of data to occupy the same memory location. This can be useful in situations where you need to store different types of data but only one type will be used at a time. For example, if you have a union that can store either an integer or a float, you can save memory by using the same memory location for both types of data, rather than allocating separate memory for each type.

//Enums-
enum Day {Mon, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
//Enums in C are a user-defined data type that consists of a set of named integer constants. They are defined using the enum keyword, followed by the enum name and a block of code that contains the enumerator list. For example, enum Day {Mon, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; defines an enumeration named Day with seven enumerators representing the days of the week. By default, the first enumerator is assigned the value 0, and each subsequent enumerator is assigned a value that is one greater than the previous enumerator. In the example above, Mon will have a value of 0, Tuesday will have a value of 1, Wednesday will have a value of 2, and so on. You can also assign specific values to the enumerators if needed. For example, enum Day {Mon = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7}; will assign the values 1 to 7 to the enumerators instead of the default values starting from 0. Enums can be used to improve code readability and maintainability by giving meaningful names to integer constants, making the code easier to understand and less error-prone.  

//Dynamic Memory Allocation:
int*p = malloc(5*sizeof(int));
free(p);
//Dynamic memory allocation in C allows you to allocate memory at runtime using functions from the stdlib.h library,such as malloc(), calloc(), realloc(), and free(). These functions enable you to create data structures that can grow or shrink in size as needed, which is particularly useful when the size of the data is not known at compile time. For example, int *p = malloc(5)*sizeof(int); allocates memory for an array of 5 integers and assigns the address of the allocated memory to the pointer p. The sizeof(int) expression is used to ensure that the correct amount of memory is allocated based on the size of the integer data type. After using dynamically allocated memory, it is important to free it using the free() function to avoid memory leaks. For example, free(p); will deallocate the memory that was previously allocated for the array of integers pointed to by p.  
//calloc() is similar to malloc() but also initializes the allocated memory to zero. For example, int *p = calloc(5, sizeof(int)); will allocate memory for an array of 5 integers and initialize all elements to zero. realloc() is used to resize previously allocated memory. For example, p = realloc(p, 10 * sizeof(int)); will resize the memory block pointed to by p to accommodate an array of 10 integers. It is important to check the return value of these functions to ensure that memory allocation was successful before using the allocated memory.
//realloc() is used to resize previously allocated memory. For example, p = realloc(p, 10 * sizeof(int)); will resize the memory block pointed to by p to accommodate an array of 10 integers. It is important to check the return value of these functions to ensure that memory allocation was successful before using the allocated memory. If realloc() fails, it returns NULL and the original memory block remains unchanged, so it is crucial to handle this case properly in your code to avoid memory leaks or undefined behavior.

//Library functions:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//1. stdio.h: Standard Input/Output library for functions like printf and scanf.
//2. stdlib.h: Standard Library for functions like malloc, free, and exit.
//3. string.h: String handling library for functions like strlen, strcpy.
//4. math.h: Math library for functions like sqrt, pow, and sin.
//5. time.h: Time library for functions like time, clock, and difftime.

//File Handling:
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
    fprintf("Error opening file!");
    return 1;
}

//Modes:
//1. "r" - Read mode: Opens a file for reading. The file must exist.
//2. "w" - Write mode: Opens a file for writing. If the file already exists, it will be truncated to zero length. If the file does not exist, it will be created.
//3. "a" - Append mode: Opens a file for writing. If the file already exists, the new data will be added to the end of the file. If the file    does not exist, it will be created. 
//4. "r+" - Read and write mode: Opens a file for both reading and writing. The file must exist.
//5. "w+" - Write and read mode: Opens a file for both writing and reading. If the file already exists, it will be truncated to zero length. If the file does not exist, it will be created.
//6. "a+" - Append and read mode: Opens a file for both appending and reading. If the file already exists, the new data will be added to the end of the file. If the file does not exist, it will be created.

//Preprocessor Directives:
#define PI = 3.14
#define MAX 100
//preprocessor directives in C are instructions that are processed by the preprocessor before the actual compilation of the code begins. They are used to define constants, macros, and include header files. For example, #define PI 3.14 defines a constant named PI with the value 3.14, and #define MAX 100 defines a constant named MAX with the value 100. These constants can be used throughout the code wherever their values are needed, and they will be replaced by their defined values during the preprocessing stage. Preprocessor directives can also be used for conditional compilation, allowing you to include or exclude parts of the code based on certain conditions using directives like #ifdef, #ifndef, #else, and #endif. 

//Macros:
define square(x) ((x) * (x))
//Macros in C are a powerful feature that allows you to define reusable code snippets or constants using the #define preprocessor directive. A macro is essentially a text substitution mechanism that replaces occurrences of the macro name with the defined code or value during the preprocessing stage of compilation. For example, #define square(x) ((x) * (x)) defines a macro named square that takes one argument x and expands to the expression ((x) * (x)). This means that whenever you use square(5) in your code, it will be replaced with ((5) * (5)), which evaluates to 25. Macros can be used to create more readable and maintainable code by giving meaningful names to complex expressions or by defining constants that can be easily updated in one place. However, it is important to use macros with caution, as they can lead to unintended consequences if not used properly, such as multiple evaluations of arguments or issues with operator precedence. To avoid these issues, it is often recommended to use inline functions instead of macros for more complex operations, as inline functions provide type safety and better debugging capabilities.   


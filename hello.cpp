//Hello World

#iostream <stdio.h>
int main() {
    std::cout << "Hello World" << std:: endl;
    return 0;
}

//Variable declaration and initialization
#include <iostream>
int main() {
    int age = 25; //Variable declaration and initialization
    std::cout << "I am " << age << " years old." << std::endl;
    return 0;
}

//Data Types
#include <iostream.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = "A";
    double d = 10.5;
    return 0;
}

//Modifiers
#include <iostream.h>
int main() {
    short s = 32767;
    long l = 2147483647;
    unsigned int u = 4294967295;
    signed int si = -2147483648;
    const int ci = 100;
    volatile int vi = 0;
    static int sti = 0;
    extern int ei;
    auto int ai = 0;
    register int ri = 0;
    return 0;
}

//Input and Output
#include <iostream.h>
int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout <<"You entered: " << a << std::endl;
    return 0;
}

//Comments
#include <iostream.h>
int main() {
    //this is a single line comment
    std::cout << "Hello World" << std::endl; /* this is a multi-line comment
    that spans multiple lines */
    return 0;
}

//Operators
#include <iostream.h>
int main() {
    int a = 10, b = 5;
    std::cout << "a + b" << a + b << std::endl; //Addiction
    std::cout << "a - b" << a - b << std::endl; //Subtraction
    std::cout << "a * b" << a * b << std::endl; //Multiplication
    std::cout << "a / b" << a / b << std::endl; //Division
    std::cout << "a % b" << a % b << std::endl; //Modulus
    std::cout << "a++" << a++ << std::endl; //Increment
    std::count << "b--" << b-- << std::endl; //Decrement
    return 0;
}

//Control Structures
#include <iostream.h>
int main() {
    int a = 10, b = 5;
    if (a > b) {
        std::cout << "a is greater than b" << std::endl;
        else if(a < b) {
            cout << "a is less than b" << std::endl;
            cout << "a is equal to b" << std::endl;
            cout <<" a is not equal to b" << std::endl;
            cout <<" a is greater than or equal to b" << std::endl;
            cout << "a is less than or equal to b" << std::endl;
            cout << "a is logical AND b" << std::endl;
            cout << "a is logical OR b" << std::endl;
            cout << "A is logical NOT b" <<std::endl;
            cout << "a is bitwise AND b" << std::endl;
            cout << "a is bitwise OR b" << std::endl;
            cout << "a is bitwise XOR b" << std::endl;
            cout << "a is bitwise NOT b" << std::endl;
            cout << "a is left shift b" << std::endl;
            cout << "a is right shift b" << std::endl;
            cout << "a is conditional operator b" << std::endl;
            cout << "a is comma operator b" << std::endl;
            cout << "a is sizeof operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is scope resolution operator b" << std::endl;
            cout << "a is member access operator b" << std::endl;
            cout << "a is pointer to member operator b" << std::endl;
            cout << "a is new operator b" << std::endl;
            cout << "a is delete operator b" << std::endl;
            cout << "a is throw operator b" << std::endl;
            cout << "a is catch operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;
            cout << "a is typeid operator b" << std::endl;

        }
    }
}

//Functions
#include <iostream.h>
void great() {
    std::cout << "Hello World" << std::endl;
    std::cout <<"Welcome to C++ programming" << std::endl;
    std::cout <<"This is a function example" << std::end;
    std::cout << "Functions are reusable blocks of code" << std::endl;
    std::cout << "functions can take parameters and return values" << std::endl;
    std::cout << "Functions can be called from other functions" << std::endl;
    std::cout << "Functions can be defined before or after the main function" << std::endl;
    std::cout << "Functions can be overloaded" << std::endl;
    std::cout << "Functions can be recursive" << std::endl;
    std::cout << "Functions can be inline" << std::endl;
    std::cout << "Functions can be lambda" << std::endl;
    std::cout << "Functions can be template" << std::endl;
    std::cout << "Functions can be virtual" << std::endl;
    std::cout << "Functions can be pure virtual" << std::endl;
    std::cout << "Functions can be static" << std::endl;
    std::cout << "Functions can be friend" << std::endl;
    std::cout << "Functions can be number of parameters" << std::endl;
    std::cout << "Functions can be default parameters" << std::endl;
    std::cout << "Functions can be variadic" << std::endl;  
    std::cout << "Functions can be function pointers" << std::endl;
}

//Classes and Objects
#include <iostream.h>
class Person {
    private:
        std::strange name;
        int age;
        public:
        void setName(std::string n) {
            name = n;
        }
}

//Inheritance
#include <iostream.h>
class Animal {
    public:
        void eat() {
            std::cout << "Eating..." << std::endl;
            std::cout << "Animals can eat food to survive" << std::endl;
            std::cout << "Animals can eat plants or other animals" << std::endl;
            std::cout << "Animals can eat different types of food" << std::endl;
            std::cout << "Animals can eat in different ways" << std::endl;
            std::cout << "Animals can eat at different times" << std::endl;
            std::cout << "Animals can eat in groups or alone" << std::endl;
            std::cout << "Animals can eat in different environments " << std::endl;
            std::cout << "Animals can eat different amounts of food" << std::endl;
            std::cout << "Animals can eat different types of food" << std::endl;
            std::cout << "Animals can eat different types of food" << std::endl;
            std::cout << "Animals can eat different types of food" << std::endl;
            std::cout << "Animals can eat different types of food" << std::endl;
            std::cout << "Animals can eat different types of food" << std::endl;
        }
}

//Polymorphism
#include <iostream.h.>
class Shape {
    public:
        virtual void draw() {
            std::cout << "Drawing a shape..." << std::endl;
            std::cout << "Shapes can be drawn in different ways" << std::endl;
            std::cout << "Shapes can be drawn in different colors" << std::endl;
            std::cout << "Shapes can be drawn in different sizes" << std::endl;
            std::cout << "Shapes can be drawn in different styles" << std::endl;
            std::cout << "Shapes can be drawn in different environments" << std::endl;
            std::cout << "Shapes can be drawn in different mediums" << std::endl;
            std::cout << "Shapes can be drawn in different perspectives" << std::endl;
            std::cout << "Shapes can be drawn in different dimensions" << std::endl;
        }
}

//Encapsulation
#include <iostream.h>
class BankAccount {
    private:
        std::string accountNumber;
        double balance;
        public:
        void setAccountNumber(std::string accNum) {
            accountNumber = accNum;
        }
        void setBalance(double bal) {
            balance = bal;
        }
        std::string getAccountNumber() {
            return accountNumber;
        }
        double getBalance() {
            return balance;
        }
        void deposit(double amount) {
            balance += amount;
        }
        void withdraw(double amount) {
            if (amount > balance) {
                std::cout << "Insufficient funds" << std::endl;
            } else {
                balance -= amount;
            }
        }
}

/// Abstraction Example

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    // Set car details
    void setCarDetails(string m, string mo, int y) {
        make = m;
        model = mo;
        year = y;
    }

    // Abstracted function (hides internal logic)
    void startCar() {
        cout << "Car is starting..." << endl;
    }

    void showCar() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c1;
    c1.setCarDetails("Toyota", "Fortuner", 2022);
    c1.startCar();
    c1.showCar();
}

//Exception Handling
#include <iostream.h>
int main() {
    try {
        int a = 10, b = 0;
        if (b == 0) {
            throw "Division by zero error";
        }
        else {
            int result = a / b;
            std::cout << "Result: " << result << std::endl;
            std::cout << "This line will not be executed if an exception is thrown" << std::endl;
            std::cout << "This line will be executed if no exception is thrown"  << std::endl;
            std::cout << "This line will be executed regardless of whether an exception is thrown or not" <<std::endl;
            std::cout << "This line will be executed regardless of whether an exception is thrown or not" << std::endl;
            std::cout << "This line will be executed regardless of whether an exception is thrown or not" << std::endl;
            std::cout << "This line will be executed regardless of whether an exception is thrown or not" << std::endl;
        }
        }
    }
}

//Standard Template Library (STL)
#include <iostream.h>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v = {5, 2, 9, 1, 5, 6};
    std::sort(v.begin(), v.end());
    std::cout << "Sorted vector: ";
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

//Preprocessor Directives
#include <iostream.h>
define PI 3.14159
int main() {
    std::cout << "Value of PI: " << PI << std::endl;
    return 0;
}

//Namespaces
#include <iostream.h>
namespace myNamespace {
    void myFunction() {
        std::cout << "Hello from myNamespace!" << std::endl;
        std::cout << "Namespaces are used to organize code and prevent name conflicts" << std::endl;
        std::cout << "You can have multiple namespaces in a program" << std::endl;
        std::cout << "You can use the 'using' keyword to avoid prefixing namespace name" << std::endl;
        std::cout << "You can also use the scope resolution operator to access members of a namespace" << std::endl;
        std::cout << "Namespaces can be nested" << std::endl;
        std::cout << "Namespaces can be anonymous" << std::endl;    
    }
}

//File Handling
#include <iostream.h>
#include <fstream>
int main() {
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, this is a file handling example in C++." << std::endl;
        outFile << "This file is created using ofstream." << std::endl;
        outFile.close();
    } else {
        std::cout << "Unable to open file for writing." << std::endl;
    }
}

//Templates
#include <iostream.h>
template <typename T>
T add(T a, T b) {
    return a + b;
}

//Lambda Expressions
#include <iostream.h>
int main() {
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "Sum: " << add(5, 3) << std::endl;
    return 0;
}

//Smart Pointers
#include <iostream.h>
#include <memory>
int main() {
    std::unique_ptr<int> ptr(new int(10));
    std::cout << "Value: " << *ptr << std::endl;
    return 0;   
}
}

//move Semantics
#include <iostream.h>
#include <utility>
class MyClass {
    public:
        MyClass() {
            std::cout << "Constructor called" << std::endl;
        }
        MyClass(const MyClass& other) {
            std::cout << "Copy constructor called" << std::endl;
        }
        MyClass(MyClass&& other) {
            std::cout << "Move constructor called" << std::endl;
        }
}

//Multithreading
#include <iostream.h>
#include <thread>
void threadFunction() {
    std::cout << "Hello from thread!" << std::endl;
    std::cout << "Multithreading allows concurrent execution of code" << std::endl;
    std::cout << "You can create multiple threads in a program" << std::endl
    std::cout << "Threads can run in parallel on multiple CPU cores" << std::endl;
    std::cout << "Threads can be synchronized using mutexes and condition variables" << std::endl;
    std::cout << "Threads can be detached or joined" << std::endl;
    std::cout << "Threads can be used to improve performance and responsiveness" << std::endl;
}

int main() {
    std::thread t(threadFunction);
    t.join();
    return 0;
}

//Lambda Expressions
#include <iostream.h>
int main() {
    auto add = [](int a, int b) {
        return a + b;
    );
    std::cout << "Sum: " << add(5, 3) << std::endl;
    return 0;
    }
}

//Snapshots
#include <iostream.h>
int main() {
    std::cout << "This is a snapshot of C++ programming concepts." << std::endl;
    std::cout << "C++ is a powerful programming language with many features." << std::endl;
    std::cout << "C++ supports object-oriented programming, procedural programming, and generic programming." << std::endl;
    std::cout << "C++ has a rich standard library that provides many useful functions and data structures." << std::endl;
    std::cout << "C++ is widely used in various domains such as game development, system programming, and embedded systems." << std::endl;
    std::cout << "C++ continues to evolve with new features and improvements being added in each new standard." << std::endl;
    return 0;
}
#hello world
print("Hello Krishna")
# This is a simple Python program that prints "Hello Krishna" to the console. It uses the built-in `print()` function to display the message. When you run this code, it will output "Hello Krishna".

#input
name = input("Enter your name: ")
print("Hello " + name)
# This code prompts the user to enter their name using the `input()` function. The user's input is stored in the variable `name`. Then, it uses the `print()` function to greet the user by concatenating the string "Hello " with the value of `name`. When you run this code, it will ask you to enter your name, and after you input it, it will greet you with "Hello [Your Name]".

#variables
x = 5
y = 10
z = x + y
print("This is the value of z: " + str(z))
# This code demonstrates the use of variables in Python. It assigns the value 5 to the variable `x` and the value 10 to the variable `y`. Then, it calculates the sum of `x` and `y` and stores the result in the variable `z`. Finally, it attempts to print the value of `z` using the `print()` function. However, there is a syntax error in the last line. The correct way to convert `z` to a string is to use parentheses instead of square brackets. The corrected line should be:
# print("This is the value of z: " + str(z))
# When you run the corrected code, it will output "This is the value of z: 15".

#data types
a = 10      #integer
b = 3.14    #float
c = "Hello"   #string
d = True    #boolean
print("The value of a is: " + str(a))
print("The value of b is: " + str(b))
print("The value of c is: " + str(c))
print("The value of d is: " + str(d))
# This code demonstrates different data types in Python. It assigns an integer value to variable `a`, a float value to variable `b`, a string value to variable `c`, and a boolean value to variable `d`. However, there is a syntax error in the assignment of the string value to variable `c`. The string "Hello" should be enclosed in quotes. The corrected line should be:
# c = "Hello"
# After correcting the code, it will print the values of `a`, `b`, `c`, and `d` to the console. The output will be:
# The value of a is: 10
# The value of b is: 3.14
# The value of c is: Hello
# The value of d is: True 

#data types
print(type(3.14))
print(type("krishna"))
print(type([1, 2, 3]))
print(type({"name": "krishna", "age": 19}))

# This code demonstrates the use of the `type()` function in Python to determine the data type of various values. It prints the data type of a float (3.14), a string ("krishna"), a list ([1, 2, 3]), and a dictionary ({"name": "krishna", "age": 19}). When you run this code, it will output:
# <class 'float'>
# <class 'str'>
# <class 'list'>
# <class 'dict'>

#operators
x = 10
y = 5
print("The sum of x and y is " + str(x + y))
print("The difference of x and y is " + str(x - y))
print("The product of x and y is " + str(x * y))
print("The quotient of x and y is " + str(x / y))
# This code demonstrates the use of basic arithmetic operators in Python. It assigns the value 10 to variable `x` and the value 5 to variable `y`. Then, it performs addition, subtraction, multiplication, and division operations on `x` and `y`, and prints the results to the console. The output will be:
# The sum of x and y is 15
# The difference of x and y is 5
# The product of x and y is 50
# The quotient of x and y is 2.0

a = 10
b = 3

print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a % b)
print(a ** b)
# This code demonstrates the use of various arithmetic operators in Python. It assigns the value 10 to variable `a` and the value 3 to variable `b`. Then, it performs addition, subtraction, multiplication, division, modulus, and exponentiation operations on `a` and `b`, and prints the results to the console. The output will be:
# 13
# 7
# 30
# 3.3333333333333335
# 1
# 1000

#conditional statements
x = 10
if x > 5:
    print("x is greater than 5")
elif x == 5:
    print("x is equal to 5")
else:
    print("x is less than 5")
# This code demonstrates the use of conditional statements in Python. It checks if the value of `x` is greater than 5, equal to 5, or less than 5, and prints the corresponding message. However, there is a syntax error in the code. The `elif` statement should be aligned with the `if` statement, and the `print()` function inside the `elif` block should be indented properly. The corrected code should be:
# x = 10
# if x > 5:
#     print("x is greater than 5")
# elif x == 5:
#     print("x is equal to 5")
# else:
#     print("x is less than 5")
# After correcting the code, it will output "x is greater than 5" since the value of `x` is 10, which is greater than 5.

age = 18

if age >=18:
    print("You are an adult.")
elif age == 18:
    print("You are exactly 18 years old.")
else:
    print("You are a minor.")
# This code checks if the value of `age` is greater than or equal to 18. If it is, it prints "You are an adult." Otherwise, it prints "You are a minor." In this case, since `age` is 18, the output will be "You are an adult."

age = 18

if age >=18:
    print("You are an adult.")
elif age > 18:
    print("You are exactly 18 years old.")
else:
    print("You are a minor.")


#Loops

#for loop
for i in range(5):
    print(i)

# This code demonstrates the use of a `for` loop in Python. It uses the `range()` function to generate a sequence of numbers from 0 to 4 (5 is not included). The loop iterates over each number in the sequence and prints it to the console. When you run this code, it will output:
# 0
# 1
# 2
# 3
# 4


fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)

for i in range(3):
    print(i)
# Output: 0, 1, 2

#While loop
x = 0
while x < 5:
    print(x)
    x += 1
# This code demonstrates the use of a `while` loop in Python. It initializes the variable `x` to 0 and continues to execute the loop as long as `x` is less than 5. Inside the loop, it prints the current value of `x` and then increments `x` by 1. When you run this code, it will output:
# 0
# 1
# 2
# 3
# 4

#nested loops
for i in range(3):
    for j in range(2):
        print("i: " + str(i) + ", j: " + str(j))
# This code demonstrates the use of nested loops in Python. The outer loop iterates over the range of 3 (0, 1, 2), and for each iteration of the outer loop, the inner loop iterates over the range of 2 (0, 1). Inside the inner loop, it prints the current values of `i` and `j`. When you run this code, it will output:
# i: 0, j: 0
# i: 0, j: 1
# i: 1, j: 0
# i: 1, j: 1
# i: 2, j: 0
# i: 2, j: 1

# A nested loop is simply one loop placed inside the body of another.

adj = ["red", "big"]
fruits = ["apple", "banana"]

for x in adj:           # Outer loop
    for y in fruits:    # Inner loop
        print(x, y)
# This code demonstrates the use of nested loops to combine elements from two lists. The outer loop iterates over the list `adj`, which contains adjectives, and the inner loop iterates over the list `fruits`, which contains fruit names. For each combination of adjective and fruit, it prints them together. When you run this code, it will output:
# red apple
# red banana
# big apple
# big banana


#Lists in Python
fruits = ["apple", "banana", "cherry"]
print(fruits[0]) #Output: apple
print(fruits[1]) #Output: banana
print(fruits[2]) #Output: cherry
# This code demonstrates how to access elements in a list in Python. The list `fruits` contains three string elements: "apple", "banana", and "cherry". The code uses indexing to access each element of the list. The index starts at 0, so `fruits[0]` returns "apple", `fruits[1]` returns "banana", and `fruits[2]` returns "cherry". When you run this code, it will output:
# apple
# banana
# cherry

nums = [1, 2, 3, 4, 5]
print(nums[0]) #Output: 1
print(nums[1]) #Output: 2
print(nums[2]) #Output: 3
print(nums[3]) #Output: 4
print(nums[4]) #Output: 5

nums.append(5)
nums.remove(2)
print(nums[0])
print(nums[1])
print(nums[2])
print(nums[3])
print(nums[4])

print(nums[-1])
print(nums[-2])
print(nums[-3])
print(nums[-4])
# This code demonstrates how to access elements in a list of integers. The list `nums` contains the integers 1 through 5. The code uses indexing to access each element of the list. The index starts at 0, so `nums[0]` returns 1, `nums[1]` returns 2, `nums[2]` returns 3, ` nums[3]` returns 4, and `nums[4]` returns 5. When you run this code, it will output:
# 1
# 2
# 3
# 4
squares = [x*x for x in range(5)]


# This code demonstrates the use of a list comprehension to create a list of squares. The expression `x*x for x in range(5)` generates the squares of the numbers from 0 to 4. The resulting list `squares` will contain the values [0, 1, 4, 9, 16]. When you run this code, it will create the list of squares and store it in the variable `squares`.


#Tuples in Python
#A tuple in Python is an ordered, immutable collection of elements used to store multiple items in a single variable. They are similar to lists but, once created, their contents cannot be changed, added to, or removed. 
fruits = ("apple", "banana", "cherry")
print(fruits[0]) #Output: apple
print(fruits[1]) #Output: banana
print(fruits[2]) #Output: cherry
# This code demonstrates how to access elements in a tuple in Python. The tuple `fruits` contains three string elements: "apple", "banana", and "cherry". The code uses indexing to access each element of the tuple. The index starts at 0, so `fruits[0]` returns "apple", `fruits[1]` returns "banana", and `fruits[2]` returns "cherry". When you run this code, it will output:
# apple
# banana
# cherry

nums = (1, 2, 3, 4, 5)
print(nums[0]) #Output: 1
print(nums[1]) #Output: 2
print(nums[2]) #Output: 3
print(nums[3]) #Output: 4


#Sets in Python
#A set in Python is an unordered collection of unique elements. It is used to store multiple items in a single variable, but unlike lists and tuples, sets do not allow duplicate values and do not maintain any specific order. Sets are defined using curly braces {} or the built-in set() function.
fruits = {"apple", "banana", "cherry"}
print("apple" in fruits) #Output: True
print("grape" in fruits) #Output: False
# This code demonstrates how to use a set in Python. The set `fruits` contains three unique string elements: "apple", "banana", and "cherry". The code uses the `in` keyword to check if certain elements are present in the set. The expression `"apple" in fruits` returns `True` because "apple" is an element of the set, while `"grape" in fruits` returns `False` because "grape" is not an element of the set. When you run this code, it will output:
# True
# False

s = {1, 2, 3}
s.add(4)
s.remove(2)
print(s) #Output: {1, 3, 4}
# This code demonstrates how to modify a set in Python. The set `s` initially contains the integers 1, 2, and 3. The `add()` method is used to add the integer 4 to the set, and the `remove()` method is used to remove the integer 2 from the set. After these operations, the set `s` will contain the integers 1, 3, and 4. When you run this code, it will output:
# {1, 3, 4}

#Dictionaries in Python
#A dictionary in Python is an unordered collection of key-value pairs. It is used to store multiple items in a single variable, where each item consists of a key and its corresponding value. Dictionaries are defined using curly braces {} and the key-value pairs are separated by a colon (:). The keys in a dictionary must be unique and immutable, while the values can be of any data type and can be duplicated.
person = {"name": "Alice", "age": 30, "city": "New York"}
print(person["name"]) #Output: Alice
print(person["age"]) #Output: 30
print(person["city"]) #Output: New York
# This code demonstrates how to access values in a dictionary in Python. The dictionary `person` contains three key-value pairs: "name" with the value "Alice", "age" with the value 30, and "city" with the value "New York". The code uses the keys to access the corresponding values in the dictionary. When you run this code, it will output:
# Alice
# 30
# New York

person = Bob = {"name": "Bob", "age": 25, "city": "Los Angeles"}
print(person["name"]) #Output: Bob
print(person["age"]) #Output: 25
print(person["city"]) #Output: Los Angeles
# This code demonstrates how to create a dictionary in Python and access its values. The dictionary `person` (also assigned to `Bob`) contains three key-value pairs: "name" with the value "Bob", "age" with the value 25, and "city" with the value "Los Angeles". The code uses the keys to access the corresponding values in the dictionary. When you  run this code, it will output:
# Bob
# 25
# Los Angeles


#Functions in Python
def greet(name):
    print("Hello, " + name + "!")
    print("Welcome to Python programming.")
# This code defines a function named `greet` that takes a single parameter `name`. The function prints a greeting message that includes the value of `name` and a welcome message. To use this function, you would call it with a specific name as an argument, like this:
greet("Alice")
# When you run this code, it will output:
# Hello, Alice!
# Welcome to Python programming.

def add(a, b):
    return a + b
print(add(2, 3)) #Output: 5
# This code defines a function named `add` that takes two parameters, `a` and `b`. The function returns the sum of `a` and `b`. The code then calls the `add` function with the arguments 2 and 3, and prints the result. When you run this code, it will output:
# 5

#Default args:

def greet(name="User"):
    print("Hello", name)
greet() #Output: Hello User
greet("Alice") #Output: Hello Alice
# This code defines a function named `greet` that takes an optional parameter `name` with a default value of "User". If the function is called without an argument, it will use the default value and print "Hello User". If an argument is provided, it will print "Hello  [Name]". When you run this code, it will output:
# Hello User
# Hello Alice


#*args/**kwargs

def total(*nums):
    return sum(nums)

def info(**data):
    print(data)

print(total(1, 2, 3)) #Output: 6
info(name="Alice", age=30) #Output: {'name': 'Alice', 'age': 30}
# This code demonstrates the use of `*args` and `**kwargs` in Python functions. The `total` function takes a variable number of arguments (using `*nums`) and returns their sum. The `info` function takes a variable number of keyword arguments ( using `**data`) and prints them as a dictionary. When you run this code, it will output:
# 6
# {'name': 'Alice', 'age': 30}



#Lambda functions in Python
add = lambda x, y: x + y
print(add(2, 3)) #Output: 5
# This code demonstrates the use of a lambda function in Python. The lambda function is defined to take two parameters, `x` and `y`, and return their sum. The lambda function is assigned to the variable `add`, which can be called like a regular function. When you run this code, it will output:
# 5

square = lambda x: x*x
print(square(5)) #Output: 25
# This code defines a lambda function that takes a single parameter `x` and returns its square. The lambda function is assigned to the variable `square`, which can be called with an argument to compute the square of that argument. When you run this code, it will output:
# 25

#Classes and Objects(OOP) in Python

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def greet(self):
        print("Hello, my name is " + self.name + " and I am " + str(self.age) + " years old.")
# This code defines a class named `Person` in Python. The class has an `__init__` method, which is the constructor that initializes the attributes `name` and `age` when a new instance of the class is created. The class also has a method named `greet`, which prints a greeting message that includes the person's name and age. To create an instance of the `Person` class and call the `greet` method, you can do the following:
person1 = Person("Alice", 30)
person1.greet()
# When you run this code, it will output:
# Hello, my name is Alice and I am 30 years old.


#File Handling in Python

with open("example.txt", "w") as file:
    file.write("Hello, this is a sample text")

with open("example.txt", "r") as file:
    content = file.read()
    print(content) #Output: Hello, this is a sample text
# This code demonstrates how to handle files in Python. The first block of code opens a file named "example.txt" in write mode ("w") and writes the string "Hello, this is a sample text" to the file. The second block of code opens the same file in read mode ("r"), reads its content, and prints it to the console. When you run this code, it will create the file "example.txt" with the specified content and then read and display that content, resulting in the output:
# Hello, this is a sample text


#Excepton Handling in Python

try:
    x = 10 / 0
except ZeroDivisionError:
    print("Error")
finally:
    print("Done")
# This code demonstrates how to handle exceptions in Python using a `try-except-finally` block. The code inside the `try` block attempts to divide 10 by 0, which raises a `ZeroDivisionError`. The `except` block catches this specific exception and prints "Error". The `finally` block is executed regardless of whether an exception occurred or not, and it prints "Done". However, there is a typo in the `except` block where `print` is misspelled as `priny`. The corrected code should be:
# try:
#     x = 10 / 0
# except ZeroDivisionError:
#     print("Error")
# finally:
#     print("Done")
# When you run the corrected code, it will output:
# Error


#Modules and Packages in Python
import math
import random
import os
import sys
import datetime
# This code demonstrates how to import various modules in Python. The `math` module provides mathematical functions, the `random` module allows you to generate random numbers, the `os` module provides functions for interacting with the operating system, the `sys` module provides access to system-specific parameters and functions, and the `datetime` module allows you to work with dates and times. By importing these modules, you can use their functions and features in your Python code. For example, you can use `math.sqrt(16)` to calculate the square root of 16, or `random.randint(1, 10)` to generate a random integer between 1 and 10. When you run this code, it will import the specified modules without producing any output.


#Iterators and Generators in Python
nums = [1, 2, 3, 4, 5]
for num in nums:
    print(num)
# This code demonstrates how to use an iterator in Python. The list `nums` contains the integers 1 through 5. The `for` loop iterates over each element in the list and prints it to the console. When you run this code, it will output:
# 1
# 2
# 3
# 4
# 5

#Generators are a special type of iterator that allow you to create an iterable sequence of values on-the-fly, without storing them all in memory at once. They are defined using a function with the `yield` keyword.  Here is an example of a generator that generates the first n Fibonacci numbers:
def gen():
    for i in range(3):
        yield i
    
for x in gen():
    print(x)

    
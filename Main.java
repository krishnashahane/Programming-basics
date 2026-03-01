//Hello World
//class - container
//main() - entry point
//System.out.println - print

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}

//Variables
int a = 10;
double b = 5.5;
char c = 'A';
boolean d = true;
String name = "Krishna";

//Data types
//Primitive- byte short int long float double char boolean
//Non-primitive-String,Array,Classes,Interfaces

//Type Casting
int x = (int) 5.9;  //Explicit
double y = 5;  //implicit

//Operators
Arithmetic + - * / %
Relational == != > <
Logical && || !
Assignment = += -=

//Input
import java.util.Scanner;
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();

//If / Else
if (x > 10) {
    System.out.println("Big");
}
else {
    System.out.println("Small");
}

//Switch
switch(day) {
    case 1: 
        break;
    default: 
        break;
}


//loops
//for loops
for(int i = 0;i<5;i++) {}

//while loops
while(x<5){}

//Do while
do {} while(x<5);

//Arrays
int[] arr = {1,2,3};
System.out.println(arr[0]);

//2D
int[] [] m = new int[3] [3];

//Strings-Immutable
String s = "Hello";
s.length();
s.toUpperCase();
s.chartAt(0);

//Methods
static int add(int a,int b) {
    return a+b;
}

//Call
add(2,3);

//Classes and Objects
class User {
    String name;
    int age;
}

//object
User u = new User();
u.name = "Krishna";

//Constructors
class User {
    User(String n){
        name = n;
    }
}

//this keyword
this.name = name;
//Refers to current object.

//OOP Pillars
//encapsulation
private int age;
public int getAge() {
    return age;
}

//inheritance
class A {}
class B extends A {}

//polymorphism - method overloading:
int add(int a,int b) {}
double add(double add(double a,double b){}
//method overriding:
@Overridevoid 
speak(){}

//Abstraction: abstract class
abstract class Animal {
    abstract void sound();
}

//Interfaces
interface Speak {
    void talk();
}
//Implement:
class Human implements Speak {
    public void talk() {}
}

//Access Modifiers
public private protected default

//Static Keyword-shared across objects
static int count;

//Final Keyword
final int x == 10;
//Constant/no override/no inherit

//Packages
package myapp;
import java.util.*;

//Exception Handling
try {
    int x = 5/0;
}
catch(Exception e){
    System.out.println(e);
}
finally {}
//Custom
throw new Exception("Error");

//Collections
//ArrayList
ArrayList<Integer> list = new ArrayList<>();
list.add(1);

//HashMap
Hashmap<String,Integer> map = new HashMap<>();
map.put("a",1);

//Generics
class Box<T> {
    T value;
}

//Lambda
(a, b) -> a+b;
//Used in streams.

//Streams API
list.stream()
.filter(x -> x>5)
.forEach(System.out::println);

//File Handling
File f = new File("a.txt");
//Read:
Scanner sc = new Scanner(f);

//Multithreading
class T extends Thread {
    public void run() {
        System.out.println("Run");
    }
}
//or
Runnable r = () -> {};

//Synchronization
synchronized(this){
}
//Thread safety.

//JDBC(DB)
Connection con = DriverManager.getConnection(url,user,pass);
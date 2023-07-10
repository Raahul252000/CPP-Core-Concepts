/*
The programming paradigm where everything is represented as an object is known as truly object-oriented programming language.

Object means a real word entity such as pen, chair, table etc. Object-Oriented Programming is a methodology or paradigm to design a program
using classes and objects. It simplifies the software development and maintenance by providing some concepts:

1. Object:Any entity that has state and behavior is known as an object. For example: chair, pen, table, keyboard, bike etc. It can
 be physical and logical. It is a instance of class.

2. Class: Blueprint/user defined data type for creating objects.

3. Inheritance: When one object acquires all the properties and behaviour of parent object i.e. known as inheritance. It provides
 code reusability. It is used to achieve runtime polymorphism.:

4. Polymorphism: Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

5. Abstraction: Abstraction in C++ is the process to hide the internal details and showing functionality only.
6. Encapsulation:

*/

#include<iostream>
using namespace std;

//class 1: empty class
class Hero{
    // if the class is empty means there is no attributes and behaviour. and the object is created then the size of that object will be 1 byte.

};

// class 2: not empty class
class Employee{
    char name[20]; // size 1*20 = 20 bytes
    int age;       // size 4*1 = 4 bytes
                    // Total size = 20+4 = 24 bytes

};


int main()
{
    Hero hulk;   // creating instance/object of the class.
    Employee rahul;

    cout << "size of Hero class: " << sizeof(hulk) << endl;     // size of hulk will be 1 bytes.
    cout << "size of Employee class: " << sizeof(rahul) << endl;     // size of rahul will be 24 bytes.


    // size of object.
    cout << sizeof(rahul);
    return 0;
}

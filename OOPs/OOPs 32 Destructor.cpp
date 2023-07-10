/*
Destructor:A destructor is a special member function that works just opposite to a constructor; unlike constructors that are used for initializing an object,
destructor destroy (or delete) the object. The purpose of the destructor is to free the resources that the object may have acquired during its lifetime.

SYNTAX:

~class_name()
{
    //some code
}

the destructor name should exactly match the class name. A destructor declaration should always begin with the tilde(~) symbol,

Destructor rules:

❖ The name should begin with a tilde sign(~) and match the class name.
❖ There cannot be more than one destructor in a class.
❖ Unlike constructors that can have parameters, destructors do not allow any parameter.
❖ They do not have any return type, not even void.
❖ A destructor should be declared in the public section of the class.
❖ The programmer cannot access the address of the destructor.
❖ It has no return type, not even void.
❖ When you do not specify any destructor in a class, the compiler generates a default destructor and inserts it into your code.

When is a destructor called?
A destructor function is called automatically when:
➔ the object goes out of scope
➔ the program ends
➔ a scope (the { } parenthesis) containing local variable ends.
➔ a delete operator is called
*/

#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
public:
// constructor
    student()
    {
        age = 25;
        cout << "constructor called." << endl;
    }

// Destructor
    ~student()
    {
        cout << "Destructor is called bro." << endl;
    }

    void set_name(string name)
    {
        this -> name = name;
    }
    void print_info()
    {
        cout << "The name is " << name << endl << "The age is: " <<age<< endl;
    }

};

int main()
{
    student rahul;

    rahul.set_name("Rahul");
    rahul.print_info();

    {
        student amit;
        amit.set_name("amit chor");
        amit.print_info();
    }

// just a bakchodi code
    int a = 5,b = 11;
    cout << "The sum is: " << a+b<< endl;
    return 0;
}

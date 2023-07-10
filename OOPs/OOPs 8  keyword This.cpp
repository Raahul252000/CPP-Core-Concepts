/*
C++ provides a keyword 'this', which represents the current object and passed as a hidden argument to all member functions. The this pointer
is a constant pointer that holds the memory address of the current object.

The keyword "This" is used when, we are setting the value of class member variable using the class member function which has the same name of arguments
as the name of the member variables.

*/

#include<iostream>
using namespace std;

class Hero{

private:
    string name;
    int health;
    char level;

public:

    // This is Parameterized constructor.
    Hero(int health,char level)
    {
        this -> health = health;       // here names of the arguments are same to the member variable. the compiler will get confused. to over come this problem we use 'this' pointer.
        this -> level = level;
        cout << "This pointer contains the memory address of the object: " <<this<< endl;
    }

    void set_name(string nam)
    {
        name = nam;
    }

    void Hero_profile()
    {
        cout << "Hero Name: " << name << endl;
        cout << "Hero Health: " << health <<endl;
        cout << "Hero health: " << level <<endl;
    }

};

int main()
{
    Hero ram(10,'A');    // creating object and passing arguments at the same time for the constructor.

    ram.Hero_profile();
    ram.set_name("Ram");

    ram.Hero_profile();


    cout << "Size of the object: " << &ram <<endl;  // printing the memory address where the object is stored.
    return 0;
}

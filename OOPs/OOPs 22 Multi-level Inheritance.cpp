/*
# Multi-level Inheritance:
when there is a type of relation in which there is a parent class, Child class and grand child class.
                                        or
When we derive a class from an already derived class.
*/

#include<iostream>
using namespace std;

// class 1:
class Human
{
public:
    string name;
    char gender;
    int age;
public:
    void greet()
    {
        cout << "member of human class";
    }
};

// class 2:
class Employee: public Human     // Employee class is inheriting form Human class
{
public:
    int id;

public:
    void set_id(int id)
    {
        this -> id = id;
    }
};

// class 3:
class Programmer: public Employee   // Programmer class is inheriting from Employee class
{
public:
    string role;

public:
    void set_role(string role)
    {
        this-> role = role;
    }
};


int main()
{
    Programmer suresh;
    suresh.name = "Suresh raina";
    suresh.age = 22;

    cout << "name: " << suresh.name << endl;
    cout << "age: " << suresh.age << endl;

    suresh.set_id(56);
    suresh.set_role("c++ developer");

    cout << " role: "<< suresh.role << endl;
    cout << " id: "<< suresh.id << endl;

    return 0;
}

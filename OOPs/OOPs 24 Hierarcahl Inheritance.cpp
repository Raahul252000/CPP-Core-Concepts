/*
# Hierarchical Inheritance:
When we have several derived classes from a single base class, such an inheritance is termed hierarchical inheritance.
*/

#include<iostream>
using namespace std;

// Base class
class A
{
public:
    void fun1()
    {
        cout << "i am the function of class A." << endl;
    }
};


// Derived class
class B: public A
{
public:
    void fun2()
    {
        cout << "i am the function of class B." << endl;
    }
};

// Derived class
class C: public A
{
public:
    void fun3()
    {
        cout << "i am the function of class C." << endl;
    }
};

int main()
{
    B b1;
    b1.fun1();
    b1.fun2();

    C c1;
    c1.fun1();
    c1.fun3();
    return 0;
}

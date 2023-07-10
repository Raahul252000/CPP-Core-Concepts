/*
To solve this ambiguity, scope resolution operator ‘ :: ‘ is one of the solutions to solve this problem.

Syntax:

    ClassName::FunctionName();

*/
#include<iostream>
using namespace std;

// Base class 1
class A
{
public:
    void fun()
    {
        cout << " i am from class A" << endl;
    }
};

// Base Class 2
class B
{
public:
    void fun()
    {
        cout << "i am from class B" << endl;
    }
};

// Derived class: Multiple inheritance
class C: public A,public B
{
public:
    int a;
    void fun()
    {
        // to resolve this problem we use scope resolution operator '::'.

        A::fun();

        // or

        // B::fun();
    }
};


int main()
{
    C obj1;
    obj1.fun();

    return 0;
}

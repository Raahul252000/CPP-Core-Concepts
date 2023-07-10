/*
In multiple inheritances, when one class is derived from two or more base classes then there may be a possibility that the base classes have
functions with the same name, and the derived class may not have functions with that name as those of its base classes. If the derived class
object needs to access one of the similarly named member functions of the base classes then it results in ambiguity because the compiler gets
confused about which base’s class member function should be called.


Solution to  Ambiguity:
To solve this ambiguity scope resolution operator is used denoted by ‘ :: ‘

Syntax:

ObjectName.ClassName::FunctionName();
*/

#include<iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << " i am from class A" << endl;
    }
};

class B
{
public:
    void fun()
    {
        cout << "i am from class B" << endl;
    }
};

class C: public A,public B
{
public:
    int a;
    void fun()
    {
        // to resolve this problem we use scope resolution operator '::'.

        //A::fun();

        // or

        // B::fun();
    }
};


int main()
{
    C obj1;
    obj1.fun();   // in this line compiler got confused, that which fun() should be called.


    return 0;
}

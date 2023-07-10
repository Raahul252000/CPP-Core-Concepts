/*
virtual Inheritance is the solution to the Diamond problem.
As mentioned before, virtual inheritance allows a class to inherit from a base class in such a way that only one instance
of the base class exists in the derived class, even if the base class is inherited through multiple paths.
Virtual inheritance helps to resolve the ambiguity caused by multiple inheritance. By using the 'virtual' keyword during
inheritance, you can ensure that the base class is shared and avoids duplication.
*/

#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int a = 5;
    void fun()
    {
        cout << "Hello good morning" << endl;
    }
};

class B: public virtual A    // a copy of fun() will come in this class.
{
public:
    int a=10;

};

class C: public virtual A    // a copy of fun() will come in this class.
{
public:
    int a=15;

};

class D: public B, public C  // Because class C and D are virtually inherited they will not allow to multiple copies of the fun() in class D.
{
public:

};

int main()
{
    D objD;
    objD.fun();
    cout << "Value of a: " << objD.C::a << endl;

    return 0;
}

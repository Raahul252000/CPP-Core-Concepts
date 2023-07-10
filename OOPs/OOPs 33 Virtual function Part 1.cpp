/*
-the pointer of parent class can point the object of child class.
- if the pointer of parent class is pointing to object of child class and we are calling the function which is common to both parent and child class then the pointer
    will always call the function from parent class if the virtual function is not present inside parent class.
- when virtual function is not present in class A then the compiler will do early binding and as the pointer is of type class A, it will call the function from class A.
- when we declare the function virtual in parent class,which is common to both both parent and child class then, it will stop the early binding and compiler will goes with
    late binding/ runtime binding which means that the calling of function depends on what address the pointer is holding.
- if the pointer is holding address of object which belongs the child class then the function of child class will be called.
*/
#include<iostream>
using namespace std;

class A
{
public:
   virtual void function1()     // here virtual function is basically stopping the early binding
    {
        cout << "Hello this is function 1 from class A" << endl;
    }
};

class B: public A
{
public:
    void function1()
    {
        cout << "Hello this is function 1 from class B" << endl;
    }
};
int main()
{
    A *p, obj1;
    B obj2;
    obj2.function1();
    p = &obj2;
    p->function1(); // since the pointer is type of class A, therefore its calling function of class A.
    return 0;
}

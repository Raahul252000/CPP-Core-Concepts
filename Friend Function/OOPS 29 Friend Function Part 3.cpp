/*
Friend function can become the friend of more than one class at a time.
*/

#include<iostream>
using namespace std;

class B; //Declaration of class B

// class 1
class A
{
private:
    int a;
public:
    void set_data(int a)
    {
        this -> a = a;
    }

    /*
    In this line we specified that this friend function will take object of Class B but compiler doesn't know
    about class B, there we need to give the declaration of class B above the class A.
    */
    friend void addition(A x,B y);
};

// class 2
class B
{
private:
    int b;

public:
    void set_data(int b)
    {
        this -> b = b;
    }

    friend void addition(A x,B y);
};

// Declaration of friend function, and it is the friend of class A and class B
void addition(A x, B y)
{
    cout << "The sum of two objects data member: " << (x.a + y.b) << endl;
}


int main()
{
    A obj1;
    obj1.set_data(6);

    B obj2;
    obj2.set_data(12);

    addition(obj1,obj2);
    return 0;
}

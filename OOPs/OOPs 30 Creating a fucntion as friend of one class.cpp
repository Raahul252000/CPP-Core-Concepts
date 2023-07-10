/*
Here we will create one function of class, a friend function to another class and that friend function will access the data member of another class.

Basically, Humne ek class k function ko dusree class ka friend banvaya.

*/

#include<iostream>
using namespace std;


// Forward declaration
class Complex;

// class 2:
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sum_realcomplex(Complex, Complex);   // will make this function a friend function of Complex class
};

// class 1:
class Complex
{
    int a,b;
    friend int Calculator :: sum_realcomplex(Complex obj1, Complex obj2);
public:
    void set_values(int a,int b)
    {
        this -> a = a;
        this -> b = b;
    }

    void print_values()
    {
        cout << "your number is: " << a << " + " << b << " i" <<endl;
    }

};


int Calculator :: sum_realcomplex(Complex obj1, Complex obj2)
    {
        return (obj1.a + obj2.a);
    }

int main()
{
    Complex c1,c2;
    Calculator calc;
    c1.set_values(12,15);
    c1.print_values();

    c2.set_values(15,8);
    c2.print_values();

    int result = calc.sum_realcomplex(c1,c2);   // calling sum_realcomplex function and receiving the value returned by it.

    cout << "The sum of real part of the complex number is: " << result << endl;

    return 0;
}


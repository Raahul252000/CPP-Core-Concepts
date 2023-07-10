/*
If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.
A class’s friend function is defined outside that class’s scope, but it has the right to access all private and protected members of the class.
Even though the prototypes for friend functions appear in the class definition, friends are not member functions. A friend function in C++ is a
function that is preceded by the keyword “friend

Syntax:
    classclass_name
    {
        friend data_type function_name(argument);       // syntax of friend function.
    };

    Characteristics of friend function:
    ● A friend function can be declared in the private or public section of the class but defined outside the class.
    ● It can be called a normal function without using the object.
    ● A friend function is not in the scope of the class, of which it is a friend.
    ● A friend function is not invoked using the class object as it is not in the class’s scope.
    ● A friend function cannot access the private and protected data members of the class directly. It needs to make use of a class object
      and then access the members using the dot operator.
    ● A friend function can be a global function or a member of another class.
*/

#include<iostream>
using namespace std;
class Complex
{
    int a,b;
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
    // It is just a declaration that it is a friend of Complex class, but it` is not a member function of a Complex class.
    friend Complex sum_complex(Complex obj1, Complex obj2);  // declaring sum_complex a frined function of a Complex class.
};



// This is an ordinary function which takes two Complex type objects as an argument and it has a Complex return type.

Complex sum_complex( Complex obj1, Complex obj2)
{
    Complex obj3;
    obj3.set_values((obj1.a + obj2.a),(obj1.b +obj2.b));       // now this function can access the private variable of the complex class directly.
    return obj3;
}


int main()
{
    Complex c1,c2, c_sum;   // creating 3 objects of Complex class
    c1.set_values(34,56);
    c1.print_values();

    c2.set_values(12,10);
    c2.print_values();

    c_sum = sum_complex(c1,c2);    // calling sum_complex function.
    c_sum.print_values();

    return 0;
}

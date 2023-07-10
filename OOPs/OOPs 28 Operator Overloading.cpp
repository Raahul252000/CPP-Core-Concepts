/*
# OPERATOR OVERLOADING:
 when an operator is overloaded with multiple jobs then it is known as operator overloading.
 It is a way to implement compile time polymorphism.

syntax:
        return_type operator + (data_type object )
        {



        }

*/
#include<iostream>
using namespace std;

class complexx
{
private:
    int a,b;

public:
    void set_data(int a, int b)
    {
        this -> a = a;
        this -> b = b;
    }

    void print_data()
    {
        cout << "The value of a: " << a << endl;
        cout << "The value of b: " << b << endl;
    }

    // Overloading '+' operator.
    complexx operator + (complexx c)   // here the + function is taking complexx type data type as an argument and returning complexx type data.
    {
        complexx temp;   //creating local object of class complexx.
        temp.a = a+c.a;
        temp.b = b+c.b;
        return temp;
    }

    // overloading '-' operator
    complexx operator - (complexx c)
    {
        complexx temp;   // creating local object of class complexx.
        temp.a = a-c.a;
        temp.b = b-c.b;

        return temp;
    }

    // overloading '()' operaotr
    void operator () ()
    {
        cout << "i am () operator " << this->a << endl;
    }

};

int main()
{

    complexx c1,c2,c3;
    c1.set_data(5,12);
    c1.print_data();

    c2.set_data(4,9);

    c3 = c1+c2;   // here c1 called the + function and c2 got passed as an argument.
    c3.print_data();

    c3 = c1-c2;    // here c1 called the - function and c2 got passed as an argument.
    c3.print_data();


    c1();     // in the case of binary operator no object is passed.

    return 0;
}

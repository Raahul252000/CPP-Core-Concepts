/*
In this code we are doing type conversion from Class to Class.
we can do type conversion by two methods:
1. using constructor
2. using casting operator.
*/


#include<iostream>
using namespace std;

// class 1
class product
{
    int p,q;
public:
    void set_data(int a, int b)
    {
        p = a;
        q = b;
    }
    void show_data()
    {
        cout << p << endl;
        cout << q << endl;
    }
    int get_p()
    {
        return p;
    }

    int get_Q()
    {
        return q;
    }
};

// class 2
class item
{
    int a,b;
public:
    void show_data()
    {
        cout << a << endl;
        cout << b << endl;
    }

    item(product s)    // this constructor will be called when 'i=p' line will execute.
    {
        a = s.get_p();
        b = s.get_Q();
    }

    item()   //default constructor: this constructor will be called when we create object without passing any arugument.
    {

    }

};

int main()
{
    item i;
    product p;
    p.set_data(7,9);
    p.show_data();

    i = p;    // here we want to assigne the value of object p into object i.
    i.show_data();
    return 0;
}

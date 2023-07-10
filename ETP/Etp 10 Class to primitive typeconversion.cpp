// class to basic type conversion.

/*
Class type to primitive type conversion can be done using the concept of casting operator.

syntax of casting operator:
    operator return_type()
    {
        return value;
    }

*/


#include<iostream>
using namespace std;

class complexx
{
    int a,b;
public:
    set_data(int x, int y)
    {
        a = x;
        b = y;
    }

    show_data()
    {
        cout << a << endl;
        cout << b << endl;
    }

    operator int()
    {
        return a;
    }
};


int main()
{
    int x;
    complexx c1;
    c1.set_data(4,8);
    c1.show_data();
    x = c1;   // when this line will execute, automatically casting operator function will be called and return the value of 'a' and that value will be assigned in 'x' .

    cout << "value of x: " << x << endl;
    return 0;
}

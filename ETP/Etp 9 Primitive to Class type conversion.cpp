// In this we are doing type conversion from primitive to class.
// For converting from primitive to class we use constructors.

#include<iostream>
using namespace std;

class complexx
{
    int a,b;
public:

// constructor 1
    complexx()  // default constructor: this constructor will be called right after when object will be created.
    {

    }

// constructor 2
    complexx(int k)    // this constructor will be called when c1=x line will execute.
    {
        a = k;
        b = 0;
    }

    void show_data()
    {
        cout << a << endl;
        cout << b << endl;
    }

    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    int x = 5;
    complexx c1;
    c1 = x;          // when this line will execute constructor 2 will be called. and the value of 'x' will be passed in constructor 2.
    c1.show_data();
    return 0;
}

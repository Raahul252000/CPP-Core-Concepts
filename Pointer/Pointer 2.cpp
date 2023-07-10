#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p1 = &a;    // creating array to 'a'.
    cout << "address of a: " << p1 << endl;
    cout << "value at address p1: " << *p1 << endl;

    int b = *p1;  // here we are copying the value of 'a' into variable 'b'.

    cout << "the value of 'a': " << a << " and the value of 'b': " << b << endl;

    // if we make any changes in the value of b, it will not reflect in the a

    b++;
    cout << "the value of b is: " << b << endl;
    cout << "the value of a is: " << a << endl;


    // now we are increasing the value of 'a' by 1.
    (*p1)++;
    cout << "value of a: " << a << endl;


    // we can also create a copy of a pointer:
    int *q1 = p1;   // q1 is a new pointer which will store the address present inside p1 pointer.

    cout << "addess insise p1: " << p1 << endl;
    cout << "addess insise q1: " << q1 << endl;

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p1 = &a;

    cout << "Value of a: " << a << endl;

    // Pointer Arithmetic

    // increasing the value stored at the address stored in p1 by 1.
    (*p1) ++;
    cout << "Value of a: " << a << endl;

    // decreasing the value stored at the address stored in p1 by 1
    (*p1) --;
    cout << "Value of a: " << a << endl;


    // this will increase the value of a by 5.
    (*p1) = (*p1) + 5;
    cout << "Value of a: " << a << endl;



    // if we forget to use the dereference operator will doing arithmetic operations then it will increase the address
    cout << "the address in p1 before changes: " << p1 << endl;
    p1++;
    cout << "the address p1 after changes: " << p1 << endl;


    return 0;
}

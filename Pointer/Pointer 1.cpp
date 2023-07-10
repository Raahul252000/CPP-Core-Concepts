#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p1 = &a;     // p1 is a pointer which will store the address of int type data.

    double b = 8;
    double *p2 = &b;   // p2 is a pointer which will store the address of doubl type of data.

    string name = "Rahul";
    string *p3 = &name;  // p3 is a pointer which will store the address of string type of data.

    char ch = 'A';
    char *p4 = &ch;    // p4 is a pointer which will store the address of char type of data.


    // accessing pointers
    cout << "The address stored in pointer p1: " << p1 << endl;
    cout << "The address stored in pointer p2: " << p2 << endl;
    cout << "The address stored in pointer p3: " << p3 << endl;
    cout << "The address stored in pointer p4: " << p4 << endl;


    // accessing values using '*' operator.
    cout << "The value stored at address p1: " << *p1 << endl;
    cout << "The value stored at address p2: " << *p2 << endl;
    cout << "The value stored at address p3: " << *p3 << endl;
    cout << "The value stored at address p4: " << *p4 << endl;


    // size of any type of pointer is always fixed: 4 bytes or 8 bytes
    cout << "The size of p1: " << sizeof(p1) << endl;
    cout << "The size of p2: " << sizeof(p2) << endl;
    cout << "The size of p3: " << sizeof(p3) << endl;
    cout << "The size of p4: " << sizeof(p4) << endl;


    int *p5;    // p5 is a pointer pointing to some garbage value. And this is a bad practice of creating the pointer.

    cout << p5 << endl;
    cout << "Value at p5 address: " << *p5 << endl;


    // we can create a null pointer if we don't know the which value we have to point at the time of creation.

    int *p6 = 0;  // p6 pointer pointing to Null.

    cout << p6 << endl;
    cout << "Value at p5 address: " << *p6 << endl;



    return 0;
}

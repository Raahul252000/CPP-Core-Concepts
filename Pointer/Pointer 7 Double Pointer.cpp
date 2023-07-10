/*
when we define a pointer to a pointer. The first pointer is used to store the address of the variable. And the second pointer is used
to store the address of the first pointer. That is why they are also known as double-pointers.

*/
#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;

    cout << "Everything is going well." << endl;

// This line will print the address of i.
    cout << "address of i: " << &i << endl;

// This line will print the address of 'i' which is stored in ptr1
    cout << "content of ptr1: " << ptr1 << endl;

// This line will also print the address of i.
    cout << "content of ptr2: " << *(ptr2) << endl;

//  this line will print the content of i
    cout << "content of i: " << i << endl;

// this line will print the content of i
    cout << "value present at the address that is present inside ptr1: " << *ptr1 << endl;

// this line will print the content of i
    cout << "value of i: " << *(*(ptr2)) << endl;

// this line will print the content of pointer ptr1
    cout << "content of ptr1: " << &i << endl;

// this line will print the content of pointer ptr1
    cout << "content of ptr1: " << ptr1<< endl;

// this line will print the content of pointer ptr1
    cout << "content of ptr1: " << *(ptr2) << endl;

// this line will print the address of the ptr1
    cout << "address of ptr1: " << &ptr1 << endl;

// this line will also print the address of the ptr1
    cout << "address of ptr1: " << ptr2 << endl;
    return 0;
}

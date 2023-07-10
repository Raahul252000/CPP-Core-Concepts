// IN this code we are playing with pointers and array
#include<iostream>
using namespace std;

int main()
{
    int marks[10] = {23,32,12,21};

    // the name of the array represents the address of first block of array
    cout << "the address of the first block of the array is: " << marks << endl;

    // we can also use '&marks[0]' to get the address of 1st block of of array.
    cout << "the address of the first block of array is: " << &marks[0] << endl;

    // to get the value stored at the first block of array we can use *marks
    cout << "the value stored in the first block of array is: " << *marks << endl;

    // if we use *marks + 1, it will add 1 in the value of of first block.
    cout << "the value stored in the first block of array is: " << *marks + 1 << endl;

    // if we use *(marks + 1), first it will add 4 bytes in the address of 1st block then '*' operator will get the value stored at that address.
    cout << *(marks + 1) << endl;     // basically this will get the value of block with index 1 of 'marks' array.
    cout << *(marks + 2) << endl;     // basically this will get the value of block with index 2 of 'marks' array.


    // NOte: array[i] and *(arr + i) are the same thing which will print the value stored at stored at the 'i' index.
    cout << " the value at 2nd index is: " << marks[2] << endl;    // value is 12
    cout << " the value at 2nd index is: " << *(marks + 2) << endl;    // value is 12


    // lets find out the size of pointer and array
    int price[10] = {240,120,150,670};  // created array
    int *ptr = &price[0];               // created pointer

    // if we use sizeof(price), it will return 40 bytes because, size of one integer is 4 and its a array of 10 integer = 4(size of integer)*10(no. of integer) = 40.
    cout << "the size of array price: " << sizeof(price) << endl;

    // if we use sizeof(*price), then it will give the size of value stored at first block of array 'price' that is 4 bytes.
    cout << "sizeof(*price): " << sizeof(*price) << endl;

    // sizeof(ptr) will give the size of pointer storing the address of the first block of the array that is: 4 bytes
    cout << "the size of the pointer is: " << sizeof(ptr) << endl;

    // sizeof(*ptr) will give the size of the value stored at the first block of the array.
    cout << "the size of the value present at pointer ptr: " << sizeof(*ptr) << endl;

    // sizeof(&ptr) will give the size of pointer
    cout << "" << sizeof(&ptr) << endl;


    // lets see the address of array and pointer

    int age[10] = {23,12,89,45,67};    // this is the array of size 10 and storing only 5 elements.

    int *p = &age[0];

    // below 3 lines will give the address of first block of array 'age'.
    cout << "address is:  " << age << endl;
    cout << "address is: " << &age[0] << endl;
    cout << "address is: " << &age << endl;


    // just 'p' will give the address of 1st block of array 'age'
    cout << "the pointer will give the address of 1st block of array: " << p << endl;

    // *p will give the value stored in 1st block of the array.
    cout << "value stored at the" << *p << endl;

    // &p will give the address of the pointer nor the address of array nor the address of any block of the array.
    cout << "this is the address of the pointer: " << &p << endl;


    return 0;
}

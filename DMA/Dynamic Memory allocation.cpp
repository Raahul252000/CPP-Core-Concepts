/*
Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. Dynamically allocated memory is allocated on
Heap, and non-static and local variables get memory allocated on Stack (Refer to Memory Layout C Programs for details).

What are applications?
1. One use of dynamically allocated memory is to allocate memory of variable size, which is not possible with compiler allocated memory except
for variable-length arrays.
2. The most important use is the flexibility provided to programmers. We are free to allocate and deallocate memory whenever we need it and
whenever we don’t need it anymore.
3. There are many cases where this flexibility helps. Examples of such cases are Linked List, Tree, etc.


How is it different from memory allocated to normal variables?
For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. For dynamically allocated memory
like “int *p = new int[10]”, it is the programmer’s responsibility to deallocate memory when no longer needed. If the programmer doesn't
deallocate memory, it causes a memory leak (memory is not deallocated until the program terminates).

How is memory allocated/deallocated in C++?
C uses the malloc() and calloc() function to allocate memory dynamically at run time and uses a free() function to free dynamically allocated
memory. C++ supports these functions and also has two operators new and delete, that perform the task of allocating and freeing the memory in
a better and easier way.

new operator:
The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the
memory and returns the address of the newly allocated and initialized memory to the pointer variable.

Syntax to use new operator:

pointer-variable = new data-type;
        or
eg: int *p = new int;

delete operator:
Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language.
Syntax: delete pointer-variable;

*/

// Implementation of Dynamic memory allocation.

#include<iostream>
using namespace std;

int main()
{
    int x = 25;
    cout << x << endl;

// Creating int type variable in heap memory which is storing 20.
    int* ptr = new int(20);
    cout << ptr << endl;
    cout << *(ptr) << endl;

// Creating char type variable in heap memory which is storing 'R'.
    char* ptr1 = new char('R');
    cout << ptr1 << endl;
    cout << *(ptr1) << endl;

// Creating string type variable in heap memory which is storing "Rahul".
    string* ptr2 = new string("Rahul");
    cout << ptr2 << endl;
    cout << *(ptr2) << endl;

// Creating array of variable size in heap memory.
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int* p = new int[n];
    cout << p << endl;    // address of the first block of the array.
    cout << *(p) << endl;

    //taking input in array:
    for(int i=0; i<n; i++)
    {
        cout << "enter value: " << endl;
        cin >> p[i];
    }

    // printing element of array:
    cout << "Array: ";
    for(int i=0; i<n; i++)
    {
        cout << p[i] << " ";
    }

    return 0;



}

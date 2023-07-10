#include<iostream>
using namespace std;

// function 1
void print_value(int *ptr)   // here we are passing the pointer into the function.
{
    cout << "the address: " << ptr << " and the value: " << *ptr << endl;
}

// function 2
void update_value(int *ptr) // here we are passing pointer into the function.
{
    *ptr = *ptr + 2;     // this will update the value of variable of main function.
}

// function 3
void print_array(int *p,int n)   // this function will receive the address there for we are receiving that address in pointer.
{
    cout << "the size of pointer is: " << sizeof(p) << endl;
    for(int i = 0; i < n; i++)
    {
        //cout << p[i] << endl;
        cout << *(p + i) << endl;
    }
}
int main()
{
    int a = 5;
    int *ptr = &a;
    int age[5] = {33,21,26,45,51};

    cout<< "the size of the array: " << sizeof(age) << endl;    // 4 * 5 = 20
    print_value(ptr);
    cout << "before: " << a << endl;

    update_value(ptr);
    cout << "after: " << a << endl;

    print_array(age,5);    // here we are passing the array but only the address of first block of array is being passed or we can say pointer is being passed.

    print_array(age + 2,5);    // here we are passing the address of 2 block of the array.

    print_array(&age[0],5);    // here we are just passing the address and size of the array.
    return 0;
}

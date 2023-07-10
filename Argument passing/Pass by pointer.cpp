/*
Passing by Pointer: Here, the memory location of the variables is passed to the parameters in the function, and then the operations are performed.
*/

#include<iostream>
using namespace std;

void swap_value(int* x, int* y)   // parameters are of pointer type, therefore it will receive the address.
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 7,b = 9;

    cout << "value of 'a' and 'b' before swapping: " << a << " "<< b << endl;

    swap_value(&a, &b);   // Here we are passing the address of the variables.

    cout << "value of 'a' and 'b' after swapping: " << a << " "<< b << endl;

    return 0;
}

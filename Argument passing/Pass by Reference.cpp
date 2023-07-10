/*
what is reference variable ?
When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be
declared as a reference by putting ‘&’ in the declaration.

Passing by Reference: It allows a function to modify a variable without having to create a copy of it. We have to declare reference
variables. The memory location of the passed variable and parameter is the same and therefore, any change to the parameter reflects in
the variable as well.
*/


#include<iostream>
using namespace std;

void swap_value(int& x, int& y)   // here in this function parameters are reference variables of variable 'a' and 'b' declared inside the main() function.
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 7,b = 9;

    cout << "value of 'a' and 'b' before swapping: " << a << " "<< b << endl;
    swap_value(a,b);
    cout << "value of 'a' and 'b' after swapping: " << a << " "<< b << endl;

    return 0;
}

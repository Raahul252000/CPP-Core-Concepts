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

int main()
{
    int num1 = 5;
    int& num2 = num1;     // Reference Variable

    cout << "Value of num1: " << num1 << endl;
    cout << "Value of num2: " << num2 << endl;

    num2 ++;

    cout << "Value of num1: " << num1 << endl;
    cout << "Value of num2: " << num2 << endl;

    return 0;
}


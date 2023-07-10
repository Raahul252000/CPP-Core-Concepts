/*
Call by Value:

In call by value, the actual value that is passed as argument is not changed after performing some operation on it. When call
by value is used, it creates a copy of that variable into the stack section in memory. When the value is changed, it changes the
value of that copy, the actual value remains the same.


*/

#include<iostream>
using namespace std;
/*
This function was supposed to change the value of 'a' which is declared in the main() function. But it will not change the value of
'a' because here the call by value concept is being used.
*/
void update(int x)    // just a copy of 'a' is created whose scope is within the function only.
{
    x++;
    cout << x << endl;
}

int main()
{
    int a = 5;
    cout << "Before calling update function: " << a << endl;
    update(a);
    cout << "After calling update function: " << a << endl;

    return 0;
}


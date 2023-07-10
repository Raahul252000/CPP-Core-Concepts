/*
Only one block would work from try and and catch.
- if any error will occur in 'try' block then 'catch' block would work.
- if there is no error in 'try' block then 'catch' block would not work.
*/

//Note: In this code we will handle custom/user-defined exception.
#include<iostream>
using namespace std;

int find_factorial(int num)
{
    int facto = 1;
    while(num>=1)
    {
        facto = facto * num;
        num--;
    }
    return facto;
}
int main()
{
    int num;
    cout << "Enter a number to find its factorial: " << endl;
    cin >> num;
    int result;
    try
    {
        if(num>=0)
        {
            result = find_factorial(num);
            cout << "The Factorial is: " << result << endl;
        }
        if(num<0)
        {
            throw(num);   // here there is no syntax error but we are intentionally generating Exception/error and handling that exception using catch block.
        }

    }
    catch(int x)
    {
        cout << "Your input value is: " << x << endl;
        cout << "please input value grater than zero." << endl;
    }

    return 0;
}

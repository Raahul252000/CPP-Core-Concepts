#include<iostream>
using namespace std;


template <typename T1, typename T2>   // here we have created two generic type.
void display_data(T1 a, T2 b)
{
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}
int main()
{
    display_data(45,89);
    display_data("rahul yadav",89);
    return 0;
}

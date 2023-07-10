#include<iostream>
using namespace std;

template <typename T>    // Template function to work with all data type
void display(T x, T y)
{
    cout << x << " and " << y << endl;
}

template <typename T>    // in this function only 1st argument is generic and 2nd one not means it is mandatory to pass int value.
void print_data(T x,int y)
{
    for(int i = 1; i<=y; i++)
    {
        cout << x << endl;
    }
}

int main()
{
    display(7,89);
    display('A','B');
    display("Rahul","Yadav");

    print_data("rahul",5);
    print_data("100",5);
    return 0;
}

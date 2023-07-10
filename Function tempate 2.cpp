/*
Generic Functions using Template:
We write a generic function that can be used for different data types.
*/
#include<iostream>
using namespace std;

template <typename T>     // This is a template function which will work for int, float, double.
T find_max(T x, T y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}


int main()
{
    int a,b;
    cout << "enter two values: " << endl;
    //cin >> a >> b;
    cout << find_max <int> (12,45) << endl;
    cout << find_max <double> (45.898,45.897)<< endl;

    return 0;
}

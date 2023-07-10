#include<iostream>
using namespace std;
template <typename X>     // Template function
void swapp(X *p,X *q)
{
    X temp = *p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a, b;
    cout << "Enter two values: " << endl;
    cin >> a>>b;
    cout << "Value before Swap: " << a << b;
    swapp<int>(&a,&b);
    cout << "Value after Swap: " << a <<" " << b<< endl;

    char c, d;
    cout << "Enter two values: " << endl;
    cin >> c>>d;
    cout << "Value before Swap: " << c << d;
    swapp<char>(&c,&d);
    cout << "Value after Swap: " << c <<" "<< d<< endl;

    return 0;
}

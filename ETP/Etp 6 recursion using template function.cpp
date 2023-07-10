#include<iostream>
using namespace std;
template <typename T>
T facto(T n)
{
    if(n==1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n*facto(n-1));
    }

}

int main()
{
    int n;
    int x = 9.3;
    cout << "Enter a number to find the factorial: " << endl;
    cin >> n;
    cout << "Factorial: " << facto(n) << endl;

    cout << facto(x) << endl;
    return 0;
}

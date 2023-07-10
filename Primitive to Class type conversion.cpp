// In this we are doing type conversion from primitive to class.

#include<iostream>
using namespace std;

class complexx
{
    int a,b;
public:
    complexx()
    {

    }

    complexx(int k)
    {
        a = k;
        b = 0;
    }

    void show_data()
    {
        cout << a << endl;
        cout << b << endl;
    }

    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    int x = 5;
    complexx c1;
    c1 = x;
    c1.show_data();
    return 0;
}

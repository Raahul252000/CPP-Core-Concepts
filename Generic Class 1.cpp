// Generic class

#include<iostream>
using namespace std;

template <class T>     // creating generic class which will work on any data type provided by the user.
class democlass
{
private:
    T a;        // any type of attribute will be defined provided by the user.
    T b;
public:
    democlass(T x, T y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
    }
};

int main()
{
    democlass <int> intobj(77,98);     // in case of generic class it is compulsory to provide data type at the time of creating object.
    intobj.display();

    democlass <string> strobj("rahul", "simran");   // here we are providing 'string' datatype
    strobj.display();
    return 0;
}

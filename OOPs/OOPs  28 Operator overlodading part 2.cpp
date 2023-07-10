// In this code, we will see how to overload '*' multiplication operator.
#include<iostream>
using namespace std;

class complexx
{
private:
    int a,b;
public:
    void set_data(int a, int b)
    {
        this -> a = a;
        this -> b = b;
    }

    void show_data()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }

// * operator is overloaded: now * operator can multiply two objects.
    complexx operator *(complexx c)    // * function is taking complexx type of data as an argument and returning complexx type of data.
    {
        complexx temp;
        temp.a = a*c.a;
        temp.b = b*c.b;

        return temp;
    }
};
int main()
{
    complexx obj1,obj2,obj3;

    obj1.set_data(4,7);
    obj1.show_data();

    obj2.set_data(2,4);
    obj2.show_data();

    obj3 = obj1 * obj2;     // here obj1 is called * function and and obj2 got passed in that.

    obj3.show_data();
    return 0;
}

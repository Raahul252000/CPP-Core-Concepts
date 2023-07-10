#include<iostream>
using namespace std;

class complexclass
{
    int a,b;
public:
    void set_data(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << a << endl;
        cout << b << endl;

    }

    friend complexclass sum_comp(complexclass obj1, complexclass obj2);      // declaring function sum_comp() a friend of class complexclass.

};

// friend function
complexclass sum_comp(complexclass obj1,complexclass obj2)
{
    complexclass temp;
    //temp.set_data((obj1.a + obj2.a),(obj1.b + obj2.b));      // friend function can access the set_data() function of complexclass.
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    return temp;
}
int main()
{
    complexclass obj1,obj2,obj3;
    obj1.set_data(5,6);
    obj2.set_data(11,3);
    obj3 = sum_comp(obj1, obj2);
    obj3.display();

    return 0;
}

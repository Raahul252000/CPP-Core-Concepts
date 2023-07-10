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

    complexclass operator + (complexclass obj)
    {
        complexclass temp;
        temp.a = a+obj.a;
        temp.b = b+obj.b;
        return temp;
    }
};

int main()
{
    complexclass obj1,obj2,obj3;
    obj1.set_data(5,6);
    obj2.set_data(11,3);

    obj1.display();
    obj2.display();

    obj3 = obj1+obj2;

    obj3.display();

    return 0;
}

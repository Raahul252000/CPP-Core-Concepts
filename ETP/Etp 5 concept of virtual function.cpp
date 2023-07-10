#include<iostream>
using namespace std;
class parent
{
public:
    virtual void greet()
    {
        cout << "hello, i am parent 1." << endl;
    }
};

class child: public parent
{
public:
    void greet()
    {
        cout << "hello, i am child." << endl;
    }

};


int main()
{
    parent *ptr;   //creating base class pointer
    child c1;

    ptr = &c1;     // base class pointer is pointing to object of derived class.
    c1.greet();
    ptr->greet();  // it will call the function from child class but if we not use the virtual keyword then it will call the function from base class.
    return 0;
}

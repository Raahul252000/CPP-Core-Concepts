/*
we can do the operator overloading also using the friend function
*/

#include<iostream>
using namespace std;

class complex
{
private:
    int a,b;
public:
    void setData(int a,int b)
    {
        this -> a = a;
        this -> b = b;
    }

    void showData()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }

    //friend function declaration
    friend complex operator -(complex X);
};

// Defination of friend function
complex operator - (complex X)   // minus function
{
    complex temp;
    temp.a = -X.a;          // this function is just making data members negative.
    temp.b = -X.b;
    return temp;
}

int main()
{
    complex c1,c2;
    c1.setData(2,3);

    c2 = -c1;     //backend: c2 = operator -(c1)

    c2.showData();
    return 0;
}

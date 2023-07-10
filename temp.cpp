#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Good Morning " << endl;
    }
};

class B
{
public:
    void fun()
    {
        cout << "Good Night" << endl;
    }
};

class C: public virtual A, public virtual B
{
public:

};
int main()
{
    C obj1;
    obj1.fun();
}

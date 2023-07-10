/*
# Multiple Inheritance:
When a class is derived with more than one base class, such an inheritance is called multiple inheritances.

*/

#include<iostream>
using namespace std;

//Base class 1:
class Animal
{
public:
    void eat()
    {
        cout << "i eat veggies."<< endl;
    }
};


// Base class 2:
class Bird
{

public:
    void movement()
    {
        cout << "i Fly."<<endl;
    }
};


// multiple inheritance
class sparrow : public Animal, public Bird
{
//
};
int main()
{
    sparrow s1;
    s1.eat();
    s1.movement();

    return 0;
}

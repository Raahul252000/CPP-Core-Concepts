N/*
If the data members of the Base class are Public and the mode of Inheritance is Protected then, the inherited data members in subclass will be Protected.
means those data inherited in subclass are not accessible from outside the class, they can be accessed inside(through function of same class) the class only.
*/

#include<iostream>
using namespace std;

// Base class
class Human
{
public:
    int height, weight, age;

private:
    string hair;

public:
    void set_age(int height,int weight,int age)
    {
        this -> height = height;
        this -> weight = weight;
        this -> age = age;
    }

    void get_info()
    {
        cout << "height:"<<height << endl;
        cout << "weight:"<<weight << endl;
        cout << "age:"<<age << endl;
    }
};

// subclass
class Male: protected Human
    // Male(subclass) class has inherited all the data members from Human(base class)
{
    public:
    string color;

public:
    void sleep()
    {
        cout << "Male is sleeping." << endl;
    }

    void get_height()
    {
        cout << "height of the male: " << height << endl;    // protected data member can be used inside the class.
    }
};

int main()
{
    Male amit;
    amit.get_height();

    return 0;
}


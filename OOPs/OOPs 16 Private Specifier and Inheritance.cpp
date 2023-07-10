/*
If the data members of the Base class are Public and the mode of Inheritance is Private then, the inherited data members in subclass will be Private.
means those data inherited in subclass are not accessible from outside the class, they can be accessed inside(through function of same class) the class only.
*/

#include<iostream>
using namespace std;

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


class Male: private Human
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
        cout << "height of the male: " << height << endl;    // private data member can be accessed inside the class only.
    }
    void get_color()
    {
        cout << "Hair color: " << endl;      // private data member can be accessed inside the class only.
    }
};

int main()
{
    Male amit;
//  cout << "Age: " << amit.age << endl;    // we cannot access the private data member from outside the class.
    amit.get_height();
    amit.get_color();

    return 0;
}



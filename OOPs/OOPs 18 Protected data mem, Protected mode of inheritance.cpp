/*
If the data members of the Base class are Protected and the mode of Inheritance is Protected then, the inherited data members in subclass will be Protected.
means those data inherited in subclass are not accessible from outside the class, they can be accessed inside(through function of same class) the class.
*/

#include<iostream>
using namespace std;

class Human
{
protected:
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


class Male: protected Human   // protected mode of inheritance.
    // Male(subclass) class has inherited all the data members from Human(base class)
{
    public:
    string color = "black";

public:
    void sleep()
    {
        cout << "Male is sleeping." << endl;
    }

    void get_height()
    {
        cout << "height of the male: " << height << endl;    // protected data member can be accessed inside the class only.
    }
    void get_color()
    {
        cout << "Hair color: " << color <<endl;      // protected data member can be accessed inside the class only.
    }
};

int main()
{
    Male amit;
//  cout << "Age: " << amit.age << endl;    // we cannot access the Protected data members from outside the class
    amit.get_height();          // accessing protected data member through member function.
    amit.get_color();

    return 0;
}


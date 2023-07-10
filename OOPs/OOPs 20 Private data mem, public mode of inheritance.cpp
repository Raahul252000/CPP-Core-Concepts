/*
If the data members of the Base class are Private and the mode of inheritance is anything(public,private and protected) then, the data members will not be inherited to subclass
means those data members will not pass to subclass and we will not be able to access those data members in subclass.
*/

#include<iostream>
using namespace std;

class Human
{
private:
    int height, weight, age;
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


class Male: public Human
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
        cout << "height of the male: " << height << endl;    // there is no height,age,weight data members in Male subclass.
    }
    void get_color()
    {
        cout << "Hair color: " << color <<endl;
    }
};

int main()
{
    Male amit;
//  cout << "Age: " << amit.age << endl;
    amit.get_height();
    amit.get_color();

    return 0;
}


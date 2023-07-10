/*
If the data members of the Base class are Public and the mode of Inheritance is Public then the inherited data members in subclass will be public.

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

// we are inheriting using public access specifier, so all the data member in Human class are public they will be public in Male class and all the private data member from parent class will not inherited in Male(subclass)

class Male: public Human
    // Male(subclass) class has inherited all the data members from Human(base class)
{
    public:
    string color;

public:
    void sleep()
    {
        cout << "Male is sleeping." << endl;
    }
};

int main()
{
    Male amit;
    amit.get_info();

    amit.height = 170;
    amit.weight = 55;
    amit.age = 22;
    amit.color = "fair";

    amit.get_info();

    amit.sleep();

    //amit.hair = "Green";   not accessible because it is private in Base class (Human)


    return 0;
}

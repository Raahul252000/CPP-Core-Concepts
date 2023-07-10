/*
Single Inheritance:

When we have only one base class and one derived class, such an inheritance is called single inheritance. It is the most common and
most used inheritance type.
*/
#include<iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int id,age;
public:
    void set_name(string name)
    {
        this -> name = name;
    }

    void set_id(int id)
    {
        this -> id = id;
    }

    void set_age(int age)
    {
        this -> age = age;
    }
    void print_details()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Age: " << age << endl;
    }
};

class Programmer: public Employee   // all data members and member functions are inherited from Employee Base class to Programmer subclass
{
protected:
    string role;

public:
    void set_role(string role)
    {
        this -> role = role;
    }

    void print_role()
    {
        cout << "Role: " << role << endl;
    }

};

int main()
{
    Employee e1;

    //cout << e1.age << endl;     // we cannot access the protected members using the class name.
    Programmer ram;

    ram.set_name("RAM");
    ram.set_age(34);
    ram.set_id(89);
    ram.set_role("Java developer");

    ram.print_details();
    return 0;
}

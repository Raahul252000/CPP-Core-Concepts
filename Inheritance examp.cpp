// Base class
#include<iostream>
using namespace std;
class Employee
{
public:
    string name;
    int age;
    char gender;
protected:
    int salary, no_of_leaves;
public:
    void get_details(string n, int ag,char gend)
    {
        name = n;
        age = ag;
        gender = gend;
    }
    void print_details()
    {
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
        cout << "Gender: " << gender<<endl;
    }
};
int main()
{
    Employee e1;
    e1.get_details("rahul",22,'M');
    e1.print_details();
    return 0;
}

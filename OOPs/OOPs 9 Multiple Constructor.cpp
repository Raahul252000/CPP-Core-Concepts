/*

NOTE: whether constructor 1 will work or constructor 2 will work, it depends on number of arguments are passed in constructor.
if only two arguments will be passed at the time of object creation then the constructor 2 will work and if 4 arguments will be
passed then the constructor 1 will work. If no arguments will be passed then constructor 3 will be called which is default constructor.
*/


#include<iostream>
using namespace std;

class Employee
{
private:
    string name,job;
    int age;
    char gender;

public:

    //Constructor 1:
    Employee(string name,int age,char gender, string job)
    {
        this -> name = name;
        this -> age = age;
        this -> gender = gender;
        this -> job = job;
    }

    // Constructor 2:
    Employee(string name,int age)
    {
        this -> name = name;
        this -> age = age;
    }

    // Constructor 3:
    Employee()
    {
        cout << "Default constructor is called." << endl;
    }

    void Show_details()
    {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age <<endl;
        cout << "Gender: " << gender <<endl;
        cout << "JOb: " << job <<endl;
    }




};
int main()
{
    Employee karan("Karan sharma",22,'M',"Software Engineer");    // instantiating object
    Employee aman("Aman",22);              // instantiating object
    Employee rahul;      // creating object

    karan.Show_details();
    aman.Show_details();
    rahul.Show_details();  // for object rahul compiler will give some garbage value, because we haven't passed any value in constructor
    return 0;
}

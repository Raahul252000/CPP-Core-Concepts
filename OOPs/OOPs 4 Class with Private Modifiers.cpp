 // Private modifiers


// Getters and Setters: This is the concept of accessing private variable of a class indirectly using public function of the same class.


#include<iostream>
using namespace std;

class Employee{

//private variables cannot be accessed from outside of the class directly.
private:
    string name;
    int Age;
    char Gender;

public:
void give_details(string n,int age,char gen)
{
    // private variables can be accessed indirectly from outside of the class using public member function.
    name = n;
    Age = age;
    Gender = gen;
}

void print_details()
{
    // Accessing private variable using public function.

    cout << "Name is: " << name <<endl;
    cout << "Age is: " << Age<<endl;
    cout << "Gender is: " << Gender<<endl;
}
private:
    void intro()
    {
        cout <<"Hello guys this is " << name <<", my age is " << Age <<" and i am student at lovely professional university." << endl;
    }
};

int main()
{
    Employee sumit;  // creating object


    sumit.give_details("sumit",23,'M');       // accessing private variables indirectly.
    sumit.print_details();                    // accessing private variables indirectly.
//  sumit.intro();                            //we cannot access the private function from outside the class using the

//  cout << "Name: " << sumit.name << endl;   // we cannot access private variables directly from outside the class.
    return 0;
}

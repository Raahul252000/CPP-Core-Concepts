 // Example of Public Modifiers

// Note : By default all the member variables and member functions are private.

#include<iostream>
using namespace std;

class Hero{

    string name[10];   // private member by default.
public:
// attributes
    int health, height;  // public members
    char level;

//methods
void give_health(int h)
{
    health = h;   // private variables of the class can be accessed indirectly by using public member function of the class.
}
void give_level(char lev)
{
    level = lev;
}

};

int main()
{
    Hero hulk;
    hulk.give_health(100);
    hulk.give_level('A');

    cout << "Health is: "<< hulk.health <<endl;  // public members can be accessed from outside the class by using class object.
    cout << "Level is: "<< hulk.level<<endl;  // public members can be accessed from outside the class by using class object.

    hulk.height = 187;  // see we can access the public data members directly from outside the class without using any function.

    cout << "height of the hulk is: " << hulk.height << endl;
    return 0;
}

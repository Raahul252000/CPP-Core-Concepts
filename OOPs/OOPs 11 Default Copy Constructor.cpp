/* implicit/default copy constructor: when we pass an object as an argument inside new object at the time of that object creation then the default copy
constructor is called. and that copy constructor will copy all values of all data member of previous object to the data member of new object.  */

#include<iostream>
using namespace std;

class Hero
{
private:
    string name;
    int health;
    char level;

public:
    // constructor 1: parameterized
    Hero(int health, char level)
    {
        this -> health = health;
        this -> level = level;
    }

    void set_name(string name)
    {
        this -> name = name;
    }
    void show_profile()
    {
        cout << "Name of the player: " << name << endl;
        cout << "Health of the player: " << health <<endl;
        cout << "Level of the player: " << level << endl;
    }
};

int main()
{

    Hero ravan(10,'C');
    ravan.set_name("Ravan");
    ravan.show_profile();


// implicitly copy constructor is called.
    Hero krish(ravan);
    krish.show_profile();

    krish.set_name("Ram");
    krish.show_profile();
    return 0;
}

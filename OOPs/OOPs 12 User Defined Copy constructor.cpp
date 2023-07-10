// User defined Copy constructor:

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
    Hero(string name, int health, char level)
    {
        this -> name = name;
        this -> health = health;
        this -> level = level;
    }
    // constructor 2: copy constructor
    Hero (Hero &a)     // so this constructor will receive Hero type data as argument.
    {
        cout << "copy constructor is called."<< endl;
        this -> health = a.health;
        this -> level = a.level;
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
    // 1st object
    Hero ram("Ramesh",10,'C');
    ram.show_profile();
/*     ram.set_name("Ram");
 *     ram.show_profile();
 */

    //2nd object
    Hero ravan(ram);    // here copy constructor will be called.
    ravan.show_profile();

    return 0;
}

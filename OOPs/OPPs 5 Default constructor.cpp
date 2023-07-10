// Default constructor : A constructor with no Arguments.

#include<iostream>
using namespace std;

class Hero{
private:
    string name;
    int health;
    char level;
public:
    Hero()
    {
        cout << "Hello this is default constructor" << endl;
    }

    void set_name(string nam)
    {
        name = nam;
    }

    void set_health(int h)
    {
        health = h;
    }

    void set_level(char ch)
    {
        level = ch;
    }
    void Hero_profile()
    {
        cout << "Hero Name: " << name << endl;
        cout << "Hero Health: " << health <<endl;
        cout << "Hero health: " << level <<endl;
    }
};
int main()
{
    Hero ram;
    ram.set_name("Ram");
    ram.set_health(100);
    ram.set_level('A');
    ram.Hero_profile();
    return 0;
}

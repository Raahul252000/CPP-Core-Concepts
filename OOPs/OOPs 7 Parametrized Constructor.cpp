// Parameterized Constructor: A constructor which takes parameter.
#include<iostream>
using namespace std;

class Hero{
private:
    string name;
    int health;
    char level;
public:

    // This is Parameterized constructor.
    Hero(int h,char l)
    {
        health = h;
        level = l;
    }

    void set_name(string nam)
    {
        name = nam;
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
    Hero thor = Hero(10,'A');
    thor.set_name("Thor");
    thor.Hero_profile();

    return 0;
}

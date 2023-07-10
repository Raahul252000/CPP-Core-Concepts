#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    int id;
    string name;
public:
    void set_data(int id, string name)
    {
        this -> id = id;
        this -> name = name;
    }

    void show_data()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
    }

    // Declaration of friend function
    friend void update_data(student& s);

};

// Defining friend function
void update_data(student& s)
{
    int x;
    cout << "Enter new id: " << endl;
    cin >> x;
    s.id = x;    // directly accessing the private data member without using any public class member.
}


int main()
{
    student s1;
    s1.set_data(29,"Rahul");
    s1.show_data();

    update_data(s1);  // calling friend function
    s1.show_data();
    return 0;
}

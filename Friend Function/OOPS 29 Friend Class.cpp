/*
In C++, a friend class is a class that is granted access to the private and protected members of another class.
When a class declares another class as its friend, the friend class can access the private and protected members of
the declaring class, even though these members would otherwise be inaccessible. By declaring a friend class, you are granting it
special permission to see and modify the normally hidden parts of the other class.


To declare a friend class, you need to add a friend declaration within the class that wants to grant access to its members.
*/

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

    friend class parent;   // Friend class declaration
};

class parent
{
public:
    void access_student(student s)
    {
        cout << "Id: " << s.id << endl;          // with the help of object we can use the private data members of student class.
        cout << "Name: " << s.name << endl;
    }
};
int main()
{

    student s1;
    s1.set_data(29,"Rahul");

    parent p1;
    p1.access_student(s1);
    return 0;
}

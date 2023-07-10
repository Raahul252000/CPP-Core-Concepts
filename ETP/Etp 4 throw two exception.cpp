#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: " << endl;
    cin >> age;
    try
    {
        if(age >= 20 && age < 150)
        {
            cout << "YOU are eligible for voting.";
        }
        else if(age < 20)
        {
            throw(age);
        }
        else if(age > 150)
        {
            //throw(age);
            throw("this age is not possible.");
        }
    }
    catch (int a)
    {
        cout << "you are not eligible bro." << endl;
    }

    return 0;
}

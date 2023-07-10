

#include<iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;
public:
    Distance(int feet, int inches)
    {
        cout << "constructor has set the values." << endl;
        this-> feet = feet;
        this-> inches = inches;
    }

    void get_data()
    {
        cout << feet << endl;
        cout << inches << endl;
    }

    void operator -()
    {
        feet--;
        inches--;
    }
};

int main()
{
    Distance d1(15,20);
    d1.get_data();

    -d1;     // In this line operator function will be called because we are using '-' with object.

    d1.get_data();
    return 0;
}

/*
a) Function overloading: When there are multiple functions in a class with the same name but different parameters, these functions are overloaded.
The main advantage of function overloading is that it increases the program’s readability. Functions can be overloaded by using different numbers of
arguments or by using different types of arguments.

*/

#include<iostream>
using namespace std;
// In this example we have overloaded Volume function.


//class 1: 1st example of function overloading.
class Volume_cal
{
public:

    // This is to calculate the volume of cylinder.
    int Volume(int r, int h)
    {
        return (3.14*r*r*h);
    }

    // This is to calculate the volume of Cube.
    int Volume( int side)
    {
        return (side*side*side);
    }

    // This is to calculate the volume of Cuboid.
    int Volume(int l, int b, int h)
    {
        return (l*b*h);
    }
};

// class 2: 2nd Example of function overloading overloading.
class Greet
{
public:

    void say_hello()
    {
        cout << "Hello sir" << endl;
    }

    void say_hello(string name)
    {
        cout << "Hello " + name << endl;
    }

};


int main()
{
    Volume_cal obj1;
    cout << "volume of a cube with side = 8: " << obj1.Volume(8) << endl;
    cout << "volume of a cylinder with radius = 5 and height = 10: " << obj1.Volume(5,10) << endl;
    cout << "volume of a cuboid with length = 5, breadth = 10 and height = 4: " << obj1.Volume(5,10,4) << endl;


    Greet ob1;
    ob1.say_hello("Rahul Yadav");
    ob1.say_hello();

    return 0;
}

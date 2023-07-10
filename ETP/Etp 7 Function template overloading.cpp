// function template overloading

#include<iostream>
using namespace std;

//this is to find the area of square
template <typename T>
T find_area(T side)
{
    return (side*side);
}

// this is to find the area of rectangle.
template <typename T>
T find_area(T length,T breadth)

{
    return (length*breadth);
}
int main()
{

    cout <<"area of square: "<< find_area(5) << endl;
    cout << "area of rectangle: " << find_area(8,7) << endl;

    return 0;
}

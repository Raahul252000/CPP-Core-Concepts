
// Function overloading
#include<iostream>
using namespace std;

int find_area(int side)
{
    return (side*side);
}

float find_area(int lenght, int breadth)
{
    return (lenght * breadth);
}

int main()
{
    int choice;
    while(true)
    {


    cout << "Press 1 to find area of Square" << endl << "press 2 to find area of rectangle " << endl;
    cout << "Press 3 to quit: " << endl;
    cin >> choice;

    if(choice == 1)
    {
        int side;
        cout << "what is the length of side: " << endl;
        cin >> side;
        cout << "area of square: "<<find_area(side) << endl;
    }
    else if(choice == 2)
    {
        int len,bre;
        cout << "Enter the length and breadth: " << endl;
        cin >>len >> bre;
        cout << "area of rectangle: " <<find_area(len,bre) << endl;
    }
    else if(choice == 3)
    {
        break;
    }
    }
    return 0;
}

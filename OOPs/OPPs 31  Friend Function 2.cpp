#include<iostream>
using namespace std;

class Square
{
private:
    int side;
public:
    Square(int x)
    {
        cout << "constructor has set the for square." << endl;
        side = x;
    }

    void show_side()
    {
        cout << side << endl;
    }

    friend int find_area(Square obj);     // declaring friend function inside the class.
};

// defining friend function outside the class.
int find_area(Square obj)
{
    int area;
    area = obj.side * obj.side;
    return area;
}

int main()
{
    Square s1(5);
    s1.show_side();
    cout << "The area of square is: " << find_area(s1) << endl;
    return 0;
}

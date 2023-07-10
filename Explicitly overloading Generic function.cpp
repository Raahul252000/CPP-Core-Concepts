
// Here in this code we are overloading generic function that is display_info()
#include<iostream>
using namespace std;

template <typename T>
void display_info(T a)
{
    cout << "I am inside generic display function. " <<a << endl;   // when any other data type except int will be passed then generic function will be called.
}

void display_info(int x)
{
    cout << "I am inside normal display function. " << x << endl;    // when int data will be passed then the normal function will be called.
}

int main()
{
    display_info("rahul");
    display_info(22);
    display_info(6.2756);
    return 0;
}

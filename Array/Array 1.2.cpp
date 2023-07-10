/* if we don't know with what values we need to initialize the array at the time of array creation then we can initialize
the entire array with zero(0).
*/

#include<iostream>
using namespace std;

int main()
{
    // creating array but not initializing the array. Therefore as a result the blocks of array will contain garbage values.
    int age[10];

    cout << "3rd block: " << age[2] << endl;  //it contains garbage value.
    cout << "5th block: " << age[4] << endl;  //it contains garbage value.

    // creating array and initializing entire array with zero. Therefore it will not contain any garbage value.
    int marks[5] = {0};
    cout << "3rd block: " << marks[2] << endl;  //it does not contains garbage value.
    cout << "4th block: " << marks[3] << endl;  //it does not contains garbage value.

    return 0;
}

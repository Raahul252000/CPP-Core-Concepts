/*Like other programming languages, array in C++ is a group of similar types of elements that have contiguous memory location.

There are 2 types of arrays in C++ programming:

1.Single Dimensional Array
2.Multidimensional Array
*/

// Single Dimensional array:
// syntax: data_type Array_name[size of array]

#include<iostream>
using namespace std;
int main()
{
    string fruits[4] = {"apple","orange","banana","kiwi"};   // we can give the size of the array.
    int marks[5]= {23,34,21,35,16};  // if we specify the size of array at the time of creation then we can give exactly same no of items to it or less no. of items will also work.
    float percents[] = {21.0,24.67,31.34,41.87}; // if we don't know the size of array at the time of creation then we can omit the size.

    cout << fruits[2]<< endl;   // we can access the elements of array using index no.
    cout << marks[1] << endl;

    // we can also traverse through array using loop:

    cout << "list of the fruits: "<< endl;
    for(int i=0; i< sizeof(fruits); i++)
    {
        cout << fruits[i] << endl;
    }


    int j = 0;
    cout << "list of the marks: " << endl;
    while (j < sizeof(marks))
    {
        cout << marks[j] << endl;
        j++;
    }
}

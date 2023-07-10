// PASSING ARRAY INTO A FUCNTION:
/*
NOTE: the name of array represents the address of the first block of array.
when we pass array into the function, behind the scene basically the address/pointer of the first block of array is being passed.
*/
#include<iostream>
using namespace std;

void print_array(int arr[])  // this function will receive array or we can say that it will receive the address of first block of array.
{
    for (int i = 0; i < (sizeof(arr)); i++)
    {
        cout << arr[i] << endl;
    }

}

void print_array(string arr[])  // this function will receive array.
{
    for (int i = 0; i < (sizeof(arr)); i++)
    {
        cout << arr[i] << endl;
    }

}
int main()
{
    int marks[5]= {23,34,21,35,16};
    string fruits[4] = {"apple","orange","banana","kiwi"};
    // Size of array is 20, because int has size 4 bytes and this array is the int arry which has 5 elements, so size = 4*5 = 20
    cout << "size of array: " << sizeof(marks)/sizeof(int) << endl;
    print_array(marks);
    cout << "size of array: " << sizeof(fruits[0]) << endl;
    print_array(fruits);



    // NOte: the name of the array itself represents the first block of the array.
    cout << "the address of the first block of array: " << marks << endl;          // both marks and &marks[0] will give the same address.
    cout << "the address of the first block of array: " << &marks[0] << endl;
    return 0;
}

// array practice.

#include<iostream>
using namespace std;

int main()
{
    // declaring and initializing the array.
    int marks[4][4] = {
    {12,14,8,4},
    {3,5,19,21},
    {12,10,9,25},
    {44,45,67,87}
    };

    //printing the elements of the matrix.
    for(int i = 0;i<4; i++)
    {
        for( int j = 0;j<4;j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout << "Enter the number of row: " << endl;
    cin >> row;
    int** arry = new int*[row];    // here we are creating the array of pointer, so that each pointer in the array can store the address of 1st block of multiple array.
    cout << "Enter the number of column: " << endl;
    cin >> col;

    // here for every block of pointer-array, we are creating array of integer.
    for(int i=0; i<row; i++)
    {
        arry[i] = new int[col];
    }

    // with this loop we are taking the input for array from the user.
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "Enter the array element: ";
            cin >> arry[i][j];
            cout << endl;
        }
    }

    // with this loop we are printing the array.
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }


    // In dynamic memory allocation, we need to take care that it is mandatory to release the memory manual using 'delete' keyword.
    for(int i=0; i<row; i++)
    {
        delete [] arry[i];
    }

    delete [] arry;

    return 0;
}

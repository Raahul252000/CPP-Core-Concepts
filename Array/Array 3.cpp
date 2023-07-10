// Multidimensional Array


// 2D Array: this type of array will contain some rows and some colomns.


/*
syntax:
    int arrayname[no_of_row][no_of_col]
                or
    char arrayname[no_of_row][no_of_col]
                or
    string arrayname[no_of_row][no_of_col]
                or
    float arrayname[no_of_row][no_of_row]
*/

#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout << "Enter the no. of rows and colomn: " << endl;
    cin >> row>>col;
    //cout << row << col << endl;
    int matrix[row][col];

    // taking input into the array from user:
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Enter the element for row " << i << " and col " <<j <<endl;
            cin >> matrix[i][j];
        }
    }

    // printing the matrix array:
    cout << "Your matrix:" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}

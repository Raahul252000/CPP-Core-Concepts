/*
when we pass 2d array into a function then it is mandatory to specify at least num of row or num of column.

SYNTAX:
    data_type name[size][size]; this is valid declaration.
                                but
    data_type name[][]; if we omit the size of column and row then it is not valid declaration.
*/

#include<iostream>
using namespace std;

// This function will take input in the array.
void take_array(int arr[][4],int row, int col)
{
    for(int i = 0; i < row; i++)
      {
          for(int j = 0; j < col; j++)
          {
              cout << "Enter a num for row " << i << " and " << " col " << j << endl;
              cin >> arr[i][j];
          }
          cout << endl;
      }
}

// This function will print the array.
void print_arr(int arr[][4],int row, int col)
{
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j< col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4];
    int arr1[] = {0};  // valid declaration.
//    int arr2[][];   this declaration is not valid in case of 2D array. In case of 2D array it is mandatory to specify the size of column and size of row.
    int arr3[4][4];   // valid declaration.

// calling functions:
    take_array(arr,3,4);
    print_arr(arr,3,4);


// taking input in arr1 from the user:
    for(int i = 0; i <= 10; i++)
    {
        cout << "Enter the element: ";
        cin >> arr1[i];
        cout << endl;
    }

    cout << "arr1 is: " << endl;
    for(int i = 0; i <= 10; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}

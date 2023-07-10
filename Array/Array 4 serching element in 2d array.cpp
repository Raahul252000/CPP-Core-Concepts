#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout << "Enter the no. of rows and colomn: " << endl;
    cin >> row>>col;
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

    int var;
    cout << "Enter the num to search inside the matrix: " << endl;
    cin >> var;
    for(int k = 0;k <row; k++)
    {
        for(int l = 0; l<col; l++)
        {
            if (var == matrix[k][l])
            {
                cout << "your element "<< matrix[k][l]<<" is found in row " << k << " col " << l;
                exit(0);
            }
            else
            {
                cout << "element is not found.";
                exit(0);
            }
        }
    }

    return 0;

}

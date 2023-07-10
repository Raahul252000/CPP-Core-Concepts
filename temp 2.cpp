#include<iostream>
using namespace std;

int main()
{
    int marks[] = {10,11,23,41,12,44,12,46};
    for(int i=0; i < sizeof(marks)/sizeof(int); i++)
    {
        cout << marks[i] << endl;
    }
}

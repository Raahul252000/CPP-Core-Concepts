// In this code we are learning how to retrieve data from the file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    string ch;

    ifstream fin;
    fin.open("mca.txt");
    while(!fin.eof())
    {
        fin >> ch;
        cout << ch << endl;
    }

    fin.close();
    return 0;
}

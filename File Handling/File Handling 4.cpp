/*
There are some file opening mode:
ios::in    // for reading data from file.
ios::out   // for writing data in file.
ios::app   // for appending data in file.
ios::ate   // for doing modification in file.
*/
// In this code we will see both writing data in file and retrieving data from file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    ofstream fout;
    fout.open("mca.txt",ios::app);      // using ios::app mode to open file in appending mode to add some more content.
    while(getline(cin,str))
    {
        if(str == "q")
        {
            break;
        }
        else
        {
            fout << str << endl;
        }
    }
    fout.close();

    ifstream fin;

    fin.open("mca.txt");
    while(getline(fin,str))
    {
        cout << str << endl;
    }

    return 0;
}

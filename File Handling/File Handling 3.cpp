// In this code we will see both writing data in file and retrieving data from file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    ofstream fout;
    fout.open("mca.txt");
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

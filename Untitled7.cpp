#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string address;
    ofstream fout;
    fout.open("sample50.txt");
    cout << "Enter your address: " << endl;
    getline(cin,address);
    fout << address;
    cout << "your address: " << address;
    return 0;
}

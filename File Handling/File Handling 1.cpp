// In this program we will learn how to send data from program into file using ofstream.


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Enter age: " << endl;
    cin >> age;

    ofstream fout;
    fout.open("mca.txt");
    fout << name << endl << age << endl;
    fout.close();
    return 0;
}

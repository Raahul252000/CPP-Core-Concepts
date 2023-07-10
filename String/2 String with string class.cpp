/*
To work with the string we need to use string class and to use string class we need to include the #include<string> header file.
*/

#include<bits/stdc++.h>             // this header file contains the #include<string> header file.
#include<algorithm>
using namespace std;
int main()
{
    string s1 {"Python"};
    string s2 {"Java"};
    string s3 {"Python"};

    // length of string
    cout << s1.size() << endl;

    // length of string
    cout << s1.length() << endl;

    // compare two strings: -1 means s2 is smaller than s1, 1 means s2 is greater than s1 and 0 means s1 and s2 are equal.
    cout << s2.compare(s1) << endl;    // it will give -1 because s2 is smaller than s1.
    cout << s3.compare(s1) << endl;    // it will give zero, means s3 and s1 are equal.

    int r = s1 == s2;
    int r2 = s1 == s2;
    cout << "strings are: " << r << endl;  // 0 means not equal and 1 means equal.

    // reverse the string
    cout << (reverse(s1.begin(),s1.end())) << endl;





    return 0;
}

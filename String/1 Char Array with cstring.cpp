/*

*/

#include<bits/stdc++.h>          // this header file contains the #include<cstring> file.
using namespace std;
int main()
{
    char fname[20] = "Rahul";
    char lname[20];
    char fullname[40];
    char fruit[30] = "Mango banana";
    char veg[20] = "Ghobhi";

    cout << "Enter your Last Name: " << endl;
    cin >> lname;

/*     cout << "Your Full Name is: " << strcat(fname,lname) << endl;
 *
 *     cout << "length of Full Name: " << strlen(fname) << endl;
 *     cout << strcpy(fullname,lname) << endl;   // yadav will be copied in fullname
 *
 *     cout << strncat(veg,fruit,5) << endl;    // mango from fruit will be appended in the end of the veg.
 */
    cout << strcmp(fname,lname) << endl;
    return 0;
}

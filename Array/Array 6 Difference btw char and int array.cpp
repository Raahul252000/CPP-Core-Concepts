// IN this, we will see the difference between char array and int array.

/* what is char array?
 Ans: The sequence of characters is called string and character array in C++ is a collection of character or sequence of character.

 Note: The character array and the integer array both are different, The character array always terminates with the NULL character while in the array is not such a condition.

 syntax:
        char array_name[size];
        eg: char name[6] = "rahul";

                or

        char array_name[size];
        eg: char name[6] = {'r','a','h','u','l','\0'};


*/

#include<iostream>
using namespace std;

int main()
{
    int age[10] = {22,21,45,34};    // int array

    char name[10] = "rahul";    // char array

    char ch[10] = {'r','a','h','u','l'};   // char array



    // here it will print the address of the first block of the array, because its a int array.
    cout << "the address of the first block of array: "<<age << endl;

    // here it will print all the content of the char array instead of printing the address of the first block.
    cout << "the content of all block of char array: "<<name << endl;

    // it will also print all the values of all block of the char array instead of printing address of the first block.
    cout << "all the content of ch array: "<<ch << endl;

    //
    cout << &name << endl;
    cout << &name[1] << endl;

    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[2] << endl;

    //

    char a = 'A';    // char variable
    char *p = &a;
    //this will print the content of 'a'.
    cout << a << endl;

    // p is the pointer to a, but it will print the content instead of printing the address until it get the null(\0) chara.
    cout << p << endl;

    return 0;
}

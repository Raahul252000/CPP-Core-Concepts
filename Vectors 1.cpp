/*
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their
storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and
traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may
need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning
or in the middle is linear in time.

SYNTAX:
    vector <datatype> nameofvector;   // this way we can create vector
                    or
    vector <datatype> nameofvector {12,32,12,34,5,31};    // this way we can create vector and initialize it.

There are 3 categories of member function:
1. Modifiers
2. Iterators
3. Capacity

# Modifiers:
 1. push_back()- it adds element at the end
 2. pop_back()- it deletes the last element
 3. insert() - it insert new elements before specified position
 4. erase() - remove the elements from the container from the specified range
 5. swap() - it swap the content between vectors
 6. assign() - it assigns new value to the vectors
 7. clear() - it is used to remove all elements

# Iterators:
 1. begin()- it returns the iterator to the beginning
 2. end() - it return the iterator to the end.

# Capacity:
 1. size() - it returns number of the elements in the vector
 2. max_size() - it returns maximum size of vector
 3. resize() - it changes the size
 4. capacity() - returns the size of allocated storage capacity
 5. empty() - it tests whether the vector is empty.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> marks {56,89,100,23};
    vector <int> age;

    cout << "value of vector at " << marks.at(1) << endl;     // at() function is used to access the value of specific index.
    cout << "value of vector at " << marks.at(0) << endl;
    cout << "value of vector at " << marks.at(3) << endl;


    marks.push_back(44);                          // push_back() function is used to add the element at the end of the vector.
    cout << marks[4] << endl;
    return 0;
}

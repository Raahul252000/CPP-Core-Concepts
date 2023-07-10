/*
                                                         ACCESS MODIFIERS:

Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions
on the class members so that they can’t be directly accessed by the outside functions.

There are 3 types of access modifiers available in C++:

1. Public: The data members and member functions declared as public can be accessed by other classes and functions too. The public members
 of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.

2. Private: The class members declared as private can be accessed only by the member functions inside the class. They are not allowed
 to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to
 access the private data members of the class.

3. Protected: The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside
 of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed
 by any subclass (derived class) of that class as well.


Note: This access through inheritance can alter the access modifier of the elements of base class in derived class depending on the mode of Inheritance.

Note: If we do not specify any access modifiers for the members inside the class, then by default the access modifier for the members will be Private.
*/

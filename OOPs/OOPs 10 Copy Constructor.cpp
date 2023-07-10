/*
                                      COPY CONSTRUCTOR:

A copy constructor is a member function that initializes an object using another object of the same class. In simple terms, a constructor which
creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor.

Note:Copy constructor also has the same name as the class name.

Characteristics of Copy Constructor:
1. The copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
2. Copy constructor takes a reference to an object of the same class as an argument.
3. The process of initializing members of an object through a copy constructor is known as copy initialization.
4. It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to
    the same class on a member-by-member copy basis.
5. The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler
    does it for us.

Types of Copy Constructors:

1. Default Copy Constructor:
An implicitly defined copy constructor will copy the bases and members of an object in the same order that a constructor would initialize
 the bases and members of the object.

2. User Defined Copy Constructor:
A user-defined copy constructor is generally needed when an object owns pointers or non-shareable references, such as to a file, in which
 case a destructor and an assignment operator should also be written.
*/

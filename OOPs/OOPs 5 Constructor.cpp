/*
                                            CONSTRUCTORS:

In C++, constructor is a special method which is invoked automatically at the time of object creation. It is used to initialize the data members
of new object generally. The constructor in C++ has the same name as class or structure and it does not have return type.

There can be two types of constructors in C++:
1.Default constructor: A constructor which has no argument is known as default constructor.

2.Parameterized constructor: A constructor which has parameters is called parameterized constructor. It is used to provide different values
  to distinct objects.

Note: If no constructors are explicitly declared in the class, a default constructor is provided automatically by the compiler.

The compiler will implicitly declare the default constructor if not provided by the programmer, will define it when in need.
The compiler-defined default constructor is required to do certain initialization of class internals. It will not touch the data members or plain
old data types (aggregates like an array, structures, etc…). However, the compiler generates code for the default constructor based on the situation.


NOTE:  If we create our own constructor, then our constructor will replace the constructor created by the compiler. Our constructor will work and
        Constructor created by the compiler will not work.
*/


////This program is example of default constructor//////////////
#include <iostream>
#include <string>
using namespace std;

class test
{
    int a, b;

public:
    test(void)
    {
        a = 4;
        b = 5;
    }
    void print()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
};

int main()
{
    test k;
    k.print(); // The value of a and b will get automatically called here due to declared constructor in the class test which eliminates the redifinition of the class member variables.

    return 0;
}

///////type of constructor/////
/*
1. Default constructor
2. Parametric constructor
3. copy constructor
4. dereference constructor
In C++, a constructor is a special member function of a class that is automatically called when an object of that class is created. Constructors are typically used to initialize the object's
member variables and to allocate resources if necessary.

Feature of Constructor:
1.Same Name as Class: A constructor has the same name as the class.
2.No Return Type: Constructors do not have a return type, not even void.
3.Default Constructor: If no constructor is defined, C++ provides a default constructor.

Benefits of Using Constructors:
Ensures that objects are properly initialized before use.
Improves code readability and maintenance by encapsulating the initialization logic.
Facilitates resource management and error prevention in complex classes.
 */
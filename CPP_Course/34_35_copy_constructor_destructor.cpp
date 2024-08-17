////Copy Constructor is that type of constructor which makes the copy of any other exiting object. See below  in the example how I am generating a copy constructor for object n3.////////
/* Few examples
When an object is initialized with another object of the same class

ClassName obj1;
ClassName obj2 = obj1; // Copy constructor is called

When an object is passed by value to a function

void function(ClassName obj);
ClassName obj1;
function(obj1); // Copy constructor is called

When an object is returned by value from a function
ClassName function() {
    ClassName obj;
    return obj; // Copy constructor is called
}

There are two types of copy constructor:
1. Shallow Copy: The default copy constructor created by the compiler performs a shallow copy. It copies the values of the member variables as they are, which is fine for simple types. 
However, for pointers or dynamic memory, a shallow copy can lead to problems like double deletion.
2. Deep Copy: A user-defined copy constructor is often needed to perform a deep copy, where the dynamically allocated memory is copied properly to ensure each object has its own copy of the
resource.

Signature of copy constructure
ClassName(const ClassName &obj);   ClassName is the copy constructor of the class ClassName, taking a constant reference to another ClassName object as a parameter, named obj."

*/
#include<iostream>
#include<string>
using namespace std;

class number
{
    int a=0;
    public:
    number(){}
    number(int num)
    {
        a=num;
    }
    number(const number &obj)
    {
        a=obj.a;
    }
    void show()
    {
        cout<<"This is my written number: "<<a<<endl;
    }

};

int main()
{
    number n1,n2=9,n3=8;
    n1.show();
    n2.show();
    n3.show();
    number x(n1);
    x.show();
    

return 0;
}

/////// Another best examples of copy constructor/////////

// #include <iostream>

// class Example {
// private:
//     int* ptr;

// public:
//     // Constructor
//     Example(int value) {
//         ptr = new int(value);
//     }

//     // Copy Constructor
//     Example(const Example& obj) {
//         // Deep copy
//         ptr = new int(*(obj.ptr));
//     }

//     // Destructor
//     ~Example() {
//         delete ptr;
//     }

//     // Display function
//     void display() {
//         std::cout << "Value: " << *ptr << std::endl;
//     }
// };

// int main() {
//     Example obj1(42);
//     Example obj2 = obj1; // Copy constructor is called

//     obj1.display();
//     obj2.display();

//     return 0;
// }

// The this pointer in C++ is an implicit pointer that points to the object for which a member function is called. It is automatically passed to non-static member functions of a class and 
//is used within those functions to access the calling object's members.

#include<iostream>
#include<string>
using namespace std;

class first
{
    int a;
    public:
    void setnumber(int a)      // Doing this means will give garbage value, Means when the parameter and class member variable is same then variable will throw garbage value. This is because
    {                          // In c local variable have highest priority, and in this class under public for compiler setnumber function parameter will act as local because class int a
    // a=a;                      // member variable is private and not accessible and to resolve this issue we use "this pointer with arrow operator"    
    this->a=a;
    }
                      
    void shownumber()
    {
        cout<<"This is the assigned number: "<<a<<endl;
    }
};

int main()
{
    first x;
    x.setnumber(9);
    x.shownumber();

    return 0;
}

/*When to Use the this Pointer:
To avoid name conflicts: When parameter names are the same as member variable names.For method chaining: To allow calling multiple methods in a single statement.
In operator overloading: Where the current object needs to be returned.*/ 
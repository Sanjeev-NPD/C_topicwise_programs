/*Ambiguity resolution in inheritance occurs in C++ when a derived class inherits from multiple base classes, and these base classes have members (like functions or variables) with the same 
name. In such a scenario, the derived class cannot directly call the member functions or access the variables with the same name from the base classes because the compiler cannot determine 
which one to use, leading to ambiguity.*/

// #include<iostream>
// #include<string>
// using namespace std;

// class base1
// {
//     public:
//     void show()
//     {
//         cout<<"This is the call of function from base1"<<endl;
//     }
// };
// class base2
// {
//     public:
//     void show()
//     {
//         cout<<"This is the call of function from base2"<<endl;
//     }
// };

// class derived : public base1, public base2{};


// int main()
// {
//     derived test;
//     test.show();           // Ambiguity: which show() to call?

//     return 0;
// }

//The above program wil give the error: request for member 'show' is ambiguous

//To resolve this :
#include<iostream>
#include<string>
using namespace std;

class base1
{
    public:
    void show()
    {
        cout<<"This is the call of function from base1"<<endl;
    }
};
class base2
{
    public:
    void show()
    {
        cout<<"This is the call of function from base2"<<endl;
    }
};

class derived : public base1, public base2
{
    public:
   // base1::show();                     // If you try to directly call Base1::show() or Base2::show() within the body of the Derived class itself, outside of any member function, you'll 
                                         //encounter an error. This is because C++ requires function calls to be made within the context of an executable block of code, such as a member function
   // base1::show();                     //, constructor, or other method. Function calls cannot be made at the class scope level. 

    void rectified()                     // This is proper way to function within the class.
    {
    base1::show();                       // by this method now we can select that which function we require for the program.
    base2::show(); 
    }

};


int main()
{
    derived test;
    test.rectified();                  // this will call the function respectively.

    return 0;
}


/*Virtual_base_class: a virtual base class is a base class that is specified as virtual when it is inherited by other classes. Virtual base classes are used in scenarios involving multiple 
inheritance to prevent multiple "instances" of a base class from being created in the inheritance hierarchy, which can lead to ambiguity and redundancy. */

// #include<iostream>
// #include<string>
// using namespace std;

// class A
// {
//     public:
//     void show()
//     {
//         cout<<"This is the example of without virtual base class"<<endl;
//     }
// };

// class B : public A {};
// class C : public A {};

// class D : public B, public C{};


// int main()
// {
//     D test;
//     // test.show();              // Error: Ambiguity, which 'show' function to call?
//     test.B::show();              // Calls show() from B's instance of A
//     test.C::show();              // Calls show() from C's instance of A

//     return 0;
// }

// program with virtual base class handelling

#include<iostream>
#include<string>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"This is the example of with virtual base class"<<endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C{};

int main()
{
    D test;
    test.show();                   // No ambiguity, only one instance of A

    return 0;
}
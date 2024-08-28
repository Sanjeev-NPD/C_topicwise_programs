/*A friend function in C++ is a function that is not a member of a class but is granted access to the private and protected members of the class.*/

#include<iostream>
#include<string>
using namespace std;

class Friend_function
{
private:
    int a, b;
public:
    friend Friend_function sumcomplex(Friend_function p1, Friend_function p2);
    int set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    int print(void)
    {
        cout<<"The sum of Complex Number is: " <<a<<" "<<"+"<<" "<<b<<"i"<<endl;
    }

};

Friend_function sumcomplex(Friend_function p1, Friend_function p2)
{
    Friend_function obj;
    obj.set_number((p1.a + p2.a), (p1.b + p2.b));
    return obj;
}


int main()
{
    Friend_function c1,c2,c3;
    c1.set_number(1,2);
    c1.print();
    c2.set_number(3,4);
    c2.print();
    c3 = sumcomplex(c1,c2);
    c3.print();
    return 0;
} 

/*In C++, the use of friend functions and regular member functions has specific purposes and implications, and understanding these can help determine when to use each.
Regular Member Functions : 
A regular member function is declared inside a class and typically defined outside the class definition. These functions have access to the private and protected members of the class they
belong to.

Friend Functions: 
A friend function is a non-member function that has been given special access to the private and protected members of the class. This is useful when you need a function to access the internals 
of a class but do not want it to be a member function.

Key Differences and When to Use Each: 

Access to Private and Protected Members:
Regular Member Functions: Automatically have access to all private and protected members of the class.
Friend Functions: Need to be explicitly granted access to private and protected members by being declared as friend.

Encapsulation:
Regular Member Functions: Better encapsulation since they are part of the class interface.
Friend Functions: Break encapsulation to some extent because they are not members of the class but still have access to its private parts.


Summary : While regular member functions and friend functions can achieve similar results in terms of functionality, they serve different purposes in terms of design and access control. 
Regular member functions are part of the class interface and should be used for most operations that involve the class. Friend functions should be used sparingly and only when there is a clear 
need for a function to access the class's private or protected members without being a member of the class.    */
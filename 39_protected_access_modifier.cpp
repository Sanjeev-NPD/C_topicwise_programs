/*Note : In a derived class, the constructor is used to initialize both its own members and those of its base class.
The base class is initialized first, using parameters passed to the derived class constructor.
The syntax follows a member initialization list pattern, where the base class is initialized first, followed by the derived class members.

1. Private member never get inherited
2. Protected member can be inherite*/


#include<iostream>
#include<string>
using namespace std;

class Base
{
    protected:
    int z;
    private:
    int x;
    public:
    // protected:
    // int z;
    
    Base(int l, int p): x(l),z(p){}

    void take()
    {
        cout<<"The value of x is : "<<x<<" &  z is : "<<z<<endl;
    }
    
    
};

class Derived : public Base                          // here when derived class is of type public, protected value can be intialized in main function.
// class Derived : protected Base                    // but when derived class is of type protected it will not allow the the main function to intialize the value.
{
    private:
    int y;
    public:

    Derived(int l,int p, int k) : Base(l,p),y(k){}    //While defining the constructor of derived class first initialize the base class() and then Initialize derived class member (studentID) seperated by ","

    void give()
    {
        cout<<"The value of y is : "<<y<<endl;
    }
    
};

int main()
{
    Derived test1(3,5,0);
    test1.take();
    test1.give();

    return 0;
}
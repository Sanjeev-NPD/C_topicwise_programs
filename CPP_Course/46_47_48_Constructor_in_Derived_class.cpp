/* In C++, the order of execution of constructors follows a specific sequence, especially in the context of inheritance 
1. Base class constructor runs first.
2. Member object constructors are called next, in the order of their declaration in the derived class.
3. Derived class constructor is executed last.
*/ 
#include<iostream>
#include<string>
using namespace std;

class base1
{
    public:
    base1()
    {
        cout<<"Class base1 is called"<<endl;
    }
    
};
class base2
{
    public:
    base2()
    {
        cout<<"Class base2 is called"<<endl;
    }

};
class Derived : public base1      // here base1 is called first, then base2 is called it is declared inside the derived class so initializes first and then at last derived class comes.
{
    base2 m;
    public:
    Derived()
    {
        cout<<"Class base3 is called"<<endl;
    }  

};

int main()
{
    Derived d;     // In the program you provided, the statement Derived d; is responsible for printing all three lines. 

    return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Baseclass
{
    public:
    int b;
    void display()
    {
        cout<<"I am from Baseclass and my value is: "<<b<<endl;
    }

};

class Derivedclass : public Baseclass
{
    public:
    int d;
    void display()
    {
        cout<<"I am from Derivedclass and my value is: "<<d<<endl;
    }

};

int main()
{
    Baseclass* x;
    Baseclass y;
    Derivedclass z;
    x=&z;                     // pointing base class pointer to derived class

    x->b=34;
    x->display();

    return 0;
}
#include<iostream>
using namespace std;

class demo
{
private:
    int a, b, c;
public:
    int d,e;
    int sum(int a, int b, int c);
    int multiple(int d, int e)
    {
       int multiply = d*e;
       cout<<"The multiply of " <<d<<" & "<<e<<" is "<<multiply<<endl;
    }

};

int demo::sum(int a, int b, int c)
{
    int add= a+b+c;
    cout<<"The Addition of"<<a<<", "<<b<<" & "<<c<<" is : "<<add<<endl; 
}



int main()
{
    int x,y,z,x2,y2;
    demo testing;

    cout<<"Enter the num1 for addition"<<endl;
    cin>>x;                                         // Here we can see that the value of the vaiable can be changed via function.
    // testing.a= 123;                              // But when we are directly trying to change the value of private specifier variable then it is throwing error and not allowing to change the value.
    cout<<"Enter the num2 for addition"<<endl;
    cin>>y;
    cout<<"Enter the num3 for addition"<<endl;
    cin>>z;
    testing.sum(x,y,z);

    cout<<"Enter the num1 for mulitplication"<<endl;
    // cin>>x2;                                     // Here we can see that the value of the vaiable can be changed via function.
    x2=2;                                           // Also we can directly change the value of the public specifier variable value.
    testing.d = x2;
    cout<<"Enter the num2 for mulitplication"<<endl;
    cin>>y2;
    testing.multiple(x2, y2);
    return 0;
}


///////////////////###############################################////////////////

//////we can also declare object with class declaration like below: /////////////

// class demo1
// {
// private:
//     /* data */
// public:

// //class definition
// }object1, object2, object3;

////////////////////###############################################////////////////




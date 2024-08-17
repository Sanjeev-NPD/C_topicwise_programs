#include<iostream>
using namespace std;

int num1,num2,num3;

// int sum(int a, int b, int c)
// {
//    int add = a+b+c;
//    return add;
// }

// int main()
// {
//     cout<<"Enter the first number"<<endl;
//     cin>>num1;
//     cout<<"Enter the 2nd number"<<endl;
//     cin>>num2;
//     cout<<"Enter the 3rd number"<<endl;
//     cin>>num3;
//     cout<<sum(num1,num2,num3)<<endl;
//     return 0; 
// }

//function prototype: A function prototype in C++ is a declaration of a function that specifies its name, return type, and parameters (but not the body). 
//It allows the compiler to know about the function's existence and how to call it before its actual definition is encountered in the code.

int sum(int a, int b, int c); //This is function prototype

int main()
{
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the 2nd number"<<endl;
    cin>>num2;
    cout<<"Enter the 3rd number"<<endl;
    cin>>num3;
    cout<<sum(num1,num2,num3)<<endl;
    return 0; 
}

// function defined after the body.

int sum(int a, int b, int c)
{
   int add = a+b+c;
   return add;                 // it is always not compulsary for funtion to return any value.
}
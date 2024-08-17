#include<iostream>
#include<string>
#include<iomanip>                          // Header file for manipulator classes and functions.
using namespace std;

int main()
{
    //////The value of "a" will change in each statement as per "a" definition///////////

    // int a=35;

    // ////// But when i will use the const keyword before int a the value of  a will never change through out the program with the function scope.
    
    // // const int a=35;                           // const will make the variable read only.
    // cout<<"The value of a = "<<a<<endl;
    // a=100;                                   // when i am trying to change the value of "a" compiler is through error "expression is not modifiable"
    // cout<<"The value of a = "<<a<<endl;

    /////////////////Manipulator/////////////////

    // int a=35;
    // cout<<"The value of a = "<<setw(5)<<a<<endl;           //// Here setw() is the manipulator which is right shifting the value by given desired no.
    // a=10000;                              
    // cout<<"The value of a = "<<setw(5)<<a<<endl;
    

    //////////////////////////operator precedence/////////////////////

    int a= 3, b=9,c;

    c= a*b+5;            // AS per rule * operation will be initiated 1st and then + operation will take place.Link for more info: https://en.cppreference.com/w/cpp/language/operator_precedence

    cout<<"The value of a  is = "<<a<<endl;
    cout<<"The value of b is = "<<b<<endl;
    cout<<"The value of c is = "<<c<<endl;



    return 0;
}
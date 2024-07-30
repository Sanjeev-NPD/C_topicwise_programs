#include<iostream>
using namespace std;


/// @brief ///////////////////
/// Function overloading in C++ is a feature that allows you to define multiple functions with the same name but with different parameters (different types or different number of 
////parameters). The compiler differentiates these functions by their signatures, which include the number and types of their arguments.
////// like : add(int a, int b) | add(double a, double b) | add(string a, string b)

int sum(int a, int b)
{
    cout<<"This is the function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"This is the function with 3 arguments"<<endl;
    return a+b+c;
}

int main()
{
    cout<<"The sum of 3 and 6 is: "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6, 9 is: "<<sum(3,6,9)<<endl;
    return 0;
}

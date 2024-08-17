#include<iostream>
#include<string>
using namespace std;

int main()
{
    float x= 9.2;
    float & y = x;            // Here y is the reference of x, so the value of y will point to the value of x and finally value of x and y will be same.
    float z = x+y;
     
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    cout<<"z = "<<(int)z<<endl;  // typecasting of float variable z to int variable z.

    return 0;
} 
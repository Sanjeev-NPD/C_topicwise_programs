#include<iostream>
using namespace std;
int a,b,c;

/// @brief //////////////////inline funtion///////////////

// inline int sum(int a,  int b)
// {
//     c = a+b;      
//     return a+b;
// }
///////////////////////////

/// @brief ///////////////Static variables/////////////
int sum(int a,  int b)
{
    static int c=0;   // Compiler will consider this only once and rest result will be based on function.
    c=c+1;
    return a+b+c;
}

int main()
{
    cout<<"Enter the the value of a : " <<endl;
    cin>>a;
    cout<<"Enter the the value of b : " <<endl;
    cin>>b;
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    //////////////////////////This is show the effect of const data type//////////////////
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    return 0;

}

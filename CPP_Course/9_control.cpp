#include<iostream>
using namespace std;
int Integer;

// int x = 5, y=6,z=7;

// int main()
// {
// cout<<"Enter the Secret code of x"<<endl;
// cin>>x;
// if (x==5)
// {
//  cout<<"You are Welcome to world of program"<<endl;
// }
// cout<<"Enter the Secret code of y"<<endl;
// cin>>y;
// if (y==6)
// {
//  cout<<"The value of y is : "<<y<<endl;
// }
// cout<<"Enter the Secret code of z"<<endl;
// cin>>z;
// if (z==7)
// {
//  cout<<"The Value of z is : "<<z<<endl;
// }

// }

int main(   )
{
    cout<<"Enter the case NO.: "<<endl;
    cin>>Integer;
    switch (Integer)
    {
    case 5:
    cout<<"You have selected 5"<<endl;
        break;
    case 6:
    cout<<"You have selected 6"<<endl;
        break;
    case 7:
    cout<<"You have selected 7"<<endl;
        break;
    default:
    cout<<"No value matched" <<endl;
        break;
    }
}
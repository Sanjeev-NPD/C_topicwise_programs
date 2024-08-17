#include<iostream>
using namespace std;
double table, input;

int main()
{
    while (1)
    {
    cout<<"Enter the value for which you want the table"<<endl;
    cin>>input;
    for (int i = 1; i <= 10; i++)
    {
        table = input*i;
        cout<<"Table of"<<input;cout<< "is: "<<table<<endl;
    }
    }
      return 0;
}
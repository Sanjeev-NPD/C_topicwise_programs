#include<iostream>
using  namespace std;

int fab(int n)
{
    int first =0, second =1, next;
    for(int i=0; i<=n; i++)
    {
    if(i<=1)
    {
        if(i == 0)
        {
            next = 0;
        }
        else
        {
            next = 1;
        }
    }
    else
    {
        next = first + second;
        first =second;
        second =next;
    }
        cout<<next;
    }
    
    
}

int main()
{
    int num;
    cout<<"Enter the value   ";
    cin>>num;
    fab(num);
    
}
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // cout<<setw(5)<<'*'<<endl;
    // cout<<setw(4)<<'*'<<setw(2)<<'*'<<endl;
    // cout<<setw(3)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<endl;
    // cout<<setw(2)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<endl;
    // cout<<setw(1)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<endl;
    
    
    
    cout<<setw(9)<<"*****"<<endl;
    cout<<setw(9)<<"* * *"<<endl;
    cout<<setw(9)<<"*****"<<endl;
    cout<<setw(5)<<'*'<<endl;
    cout<<setw(5)<<'*'<<endl;
    cout<<setw(5)<<'*'<<endl;
    cout<<setw(4)<<'*'<<setw(2)<<'*'<<endl;
    cout<<setw(3)<<'*'<<setw(2)<<' '<<setw(2)<<'*'<<endl;
    cout<<setw(2)<<'*'<<setw(2)<<' '<<setw(2)<<' '<<setw(2)<<'*'<<endl;
    cout<<setw(1)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<setw(2)<<'*'<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<setw(0)<<"*********"<<endl;
    }

    return 0;
}
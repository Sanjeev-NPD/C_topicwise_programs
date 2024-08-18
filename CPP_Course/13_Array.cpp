#include<iostream>
using namespace std;
// int bracket[] = {45,56,67,78,89,90};

// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         cout<<"Component of array Number "<<i<<" is "<<bracket[i]<<endl;
//     }
//     return 0;
// }

int main()
{
    int bracket[5]={};
    bracket[0]=45;
    bracket[1]=56;
    bracket[2]=67;
    bracket[3]=78;
    bracket[4]=89;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Component of array Number "<<i<<" is "<<bracket[i]<<endl;
    }
    
    int*p = bracket;

    cout<<"First value of array[0]"<<*p<<endl;
    cout<<"First value of array[1]"<<*(p+1)<<endl;
    cout<<"First value of array[2]"<<*(p+2)<<endl;
    cout<<"First value of array[3]"<<*(p+3)<<endl;
    cout<<"First value of array[4]"<<*(p+4)<<endl;

    return 0;
}




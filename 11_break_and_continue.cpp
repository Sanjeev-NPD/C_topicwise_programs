#include<iostream>
using namespace std;

// int main()
// {
//     for (int i = 0; i < 40; i++)
//     {
//         cout<<"The value of i: "<<i<<endl;
//         if (i==20)
//         {
//             cout<<"Loop breaked"<<endl;
//             break;
           
//         }
        
//     }
//     return 0;
// }

int main()
{
    for (int i = 0; i < 40; i++)
    {
        
        if (i==20)
        {
            cout<<"The value of i = 20 is skipped"<<endl;
            continue;
        }
        cout<<"The value of i: "<<i<<endl;
        
    }
    
}
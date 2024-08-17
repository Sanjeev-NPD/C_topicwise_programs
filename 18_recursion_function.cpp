#include <iostream>
using namespace std;
int a, n, i;

// int factorial(int n)
// {
//     if (n<=1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main()
// {
//     cout<<"Enter the any Integer value"<<endl;
//     cin>>a;
//     cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
//     return 0;

// }

/// @brief ////////////
////This iteration method to find the factorial of any number.
/// @return /
int main()
{
    int count;
    cout << "Enter the number" << endl;
    cin >> count;

    if (count == 0 || count == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int factorial = 1;
        for (int i = 1; i <= count; i++)
        {
           factorial *=i;
        //    cout<<factorial<< " ";
        }
        cout<<factorial<<"  ";
    }

    return 0;
}



////////////////Fabonacci series recersion method////

// int fab(int n)
// {
//     if (n<=1)
//     {
//         return 1;
//     }
//     int fibonacci = fab(n-2) + fab(n-1);
//     return fibonacci ;
// }

// int main()
// {
//     cout<<"Enter the any Integer value"<<endl;
//     cin>>a;
//     cout<<"The fabonacci series of "<<a<< " is: "<<endl;
//     for (int i = 0; i < a; i++)
//     {
//         cout<<fab(i)<<"  " ;
//     }

//     return 0;

// }

////////////////This method should always be avoided if the task is complex, because it consumes unnesseccary memory.

/////////////////////////Iteration method////////////

// double fibonacci(int num)
// {
//     double first =0, second =1, next;
//     for (i = 1; i <=num; i++)
//     {
//     if (i<=1)
//     {
//         next = 1;
//     }
//     else
//     {
//         next = first + second;
//         first = second;
//         second= next;
//     }
//     cout<< next<<"  ";
//     }

// }
// int main()
// {
//     int num;
//     cout<<"Enter the Required Number "<<endl;
//     cin>>num;
//     fibonacci(num);
//     return 0;

// }

///////////// 2nd method for doing the above steps///

// int fibonacci, first=0, second=1;
// int fab(int n)
// {
//     if (n<1)
//     {
//         return 1;
//     }
//     else
//     {
//     int fibonacci = first + second ;
//     first = second;
//     second = fibonacci;
//     return fibonacci ;
//     }

// }

// int main()
// {
//     cout<<"Enter the any Integer value"<<endl;
//     cin>>a;
//     cout<<"The fabonacci series of "<<a<< " is: "<<endl;
//     for (int i = 0; i < a; i++)
//     {
//         cout<<fab(i)<<"  " ;
//     }

//     return 0;

// }
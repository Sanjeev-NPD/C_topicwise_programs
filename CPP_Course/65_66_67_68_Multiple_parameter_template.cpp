// Function Template with multiple parameter

// #include<iostream>
// #include<string>
// using namespace std;

// template<typename T1, typename T2>
// auto addition(T1 x, T2 y)
// {
//     cout<<"The sum of "<<x <<" & "<<y<<" is "<<x+y<<endl;
// }

// int main()
// {
//        addition(3.9,4.9);

//     return 0;
// }



//class template with multiple parameter.

#include<iostream>
#include<string>
using namespace std;

template <typename T1, typename T2>
class success
{
    T1 A;
    T2 B;
    public:
    success(T1 x, T2 y): A(x),B(y) {};

        auto sum()
        {
            cout<<"The sum of "<<A <<" & "<<B<<" is "<<A+B<<endl;
        }
};


int main()
{
    success <int,int> result(4,5);
    result.sum();
    success <int,float> result2(4,5.5);
    result2.sum();
    success <int,double> result3(4,5.55555);
    result3.sum();

    return 0;
}
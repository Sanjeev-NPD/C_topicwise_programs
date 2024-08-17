//////////////This is one of the simpler exampler of the friend function

// #include<iostream>
// #include<string>
// using namespace std;

// class y;

// class x
// {
//     int num1;
//     public:
//     void setvalue(int value)
//     {
//         num1=value;
//     }
//     friend void add(x, y);
// };

// class y
// {
//     int num2;
//     public:
//     void setvalue(int value)
//     {
//         num2=value;
//     }
//         friend void add(x, y);
// };

// void add(x p1, y p2)
// {
//     cout<<"Sum of members of class x and y = "<<p1.num1 + p2.num2<<endl;
// }

// int main()
// {
//     x a;
//     a.setvalue(9);
//     y b;
//     b.setvalue(11);
//     add(a,b);
// return 0;
// }

//////Swapping two number //////////////

#include<iostream>
#include<string>
using namespace std;

class y;

class x
{
    int num1;
    public:
    void setvalue(int value)
    {
        num1=value;
    }
    friend void swap(x, y);
};

class y
{
    int num2;
    public:
    void setvalue(int value)
    {
        num2=value;
    }
        friend void swap(x, y);
};

void swap(x p1, y p2)
{
    int temp=p1.num1 ;
    p1.num1=p2.num2;
    p2.num2 = temp;
    cout <<p1.num1 <<" & "<<p2.num2<<endl;
}

int main()
{
    x a;
    a.setvalue(9);
    y b;
    b.setvalue(11);
    swap(a,b);
return 0;
}
#include<iostream>
using namespace std;

template <typename x>
class yahoo
{
    x a, b;
    public:
    yahoo(x take1, x take2) : a(take1), b(take2){};

    void getvalue()
    {
        cout<<"The sum of "<<a<<" & "<<b<<" is "<<a+b<<endl;
    }

};


int main()
{
    yahoo<int> result1(2,3);
    result1.getvalue();
    yahoo<double> result2(2.9,30.8);
    result2.getvalue();
    yahoo<float> result3(2.7,3.8);
    result3.getvalue();
    yahoo<char> result4('a','b');
    result4.getvalue();



    return 0;
}
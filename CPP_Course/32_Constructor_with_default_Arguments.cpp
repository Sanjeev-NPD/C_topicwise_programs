#include<iostream>
using namespace std;

class test
{
    int x, y,z;
    public:
    test(int a, int b=8, int c=3) : x(a),y(b),z(c) {}    // here b and c have have the default value i.e. 8 and 3 respectively.

    void print()
    {
        cout<<"Value of a = "<<x<<" b ="<<y<<" c ="<<z<<endl;
    }
};

int main()
{
    test m1(1,2);     // we have pass only two parameter value but the third value of the parameter is already there as it is by default.
    m1.print();
    return 0;
}
////////The concept of constructor overloading is same as the function overloading. Means we can define multiple function with same name but with different parameters and types.///////////

#include<iostream>
#include<string>
using namespace std;

class A
{
    int i,j;
    // int j;
    public:
    A(int x, int y) : i(x), j(y){}   // parameterized constructor
    A(int x) : i(x){}                // parameterized costructor overloading
    A() : i(),j(){}                // default costructor overloading

    void print()
    {
        cout<<"The value of sum of "<<i<<" & "<<j<<" is: "<<i+j<<endl;
    }

};


int main()
{
    A first(2,3);
    first.print();

    A second(5);
    second.print();

    A third; // don't use empty bracket here as it will error because we not accepting any parameter in the constructor.
    third.print();
return 0;
}
#include <iostream>
#include <string>
using namespace std;

class base1
{
    // protected:
    int a;

public:
    void setvalue1(int x)
    {
        a = x;
        cout << "The value of a: " << a << endl;
    }
    int getter1()                               // This the getter function, used to initialize the value of private memebers.
    {                                           // This getter function is not required when member variables are declared under protected type.
        return a;
    }
};
class base2 
{
    // protected:
    int b;

public:
    void setvalue2(int y)
    {
        b = y;
        cout << "The value of b: " << b << endl;
    }
    int getter2()
    {
        return b;
    }
};
class derived : public base1, public base2                // this derived class has been inherited to two multiple classes i.e. base1 & base2.
{
    int c;

public:
    void getvalue()
    {
        c = getter1() * getter2();          // This getter function is not required when member variables are declared under protected type.
        // c= a*b;       
        cout << "Result of c is : " << c << endl;
    }
};

int main()
{
    derived result;
    result.setvalue1(4);
    result.setvalue2(3);
    result.getvalue();

    return 0;
}
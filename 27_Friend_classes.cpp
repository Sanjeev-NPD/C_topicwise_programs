#include <iostream>
#include <string>
using namespace std;

// Forward declaration
class one;

class two
{
public:

    int sumReal(one, one);
    int sumComplex(one, one);
};

class one
{
    int a, b;

    // Individually declaring funtions as friends
    //  friend int two::sumReal(one , one);
    //  friend int two::sumComplex(one , one);

    // Aliter: Declaring the entire two class as friend
    friend class two;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print(void)
    {
        cout << "The input Number is : " << a << " and " << b << endl;
    }
};

int two::sumReal(one p1, one p2)
{
    return (p1.a + p2.a);
}

int two::sumComplex(one p1, one p2)
{
    return (p1.b + p2.b);
}

int main()
{
    one p1, p2; 
    p1.setnumber(1, 4);
    p2.setnumber(5, 7);
    two sum;
    int res = sum.sumReal(p1, p2);
    cout << "Sum of real part of p1 and p2 : " << res << endl;
    int res_comp = sum.sumComplex(p1, p2);
    cout << "Sum of complex part of p1 and p2 : " << res_comp <<"i"<< endl;
    cout<< "complex number: "<<res<<" + "<<res_comp<<"i"<< endl;


    return 0;
}
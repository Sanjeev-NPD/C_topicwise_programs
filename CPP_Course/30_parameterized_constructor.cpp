#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class para
{
    int a,b ;
    float result;

    public: 

    para(int x, int y)  /////////////This function can also be written as " Para(int x, int y) : a(x), b(y) {}""
    {
        a=x;
        b=y;
        result=0;
    }

    para(): a(0), b(0), result(0) {} // default constructor

    float line1(const para& r1  , const para& r2);
    float line2(const para& r1 , const para& r2);
    float square(const para& n1 ,const para& n2);

    void print()
    {
        cout<<"The value of a = "<<a<<" & b= "<<b<<endl;  
    } 

};

float para::line1(const para& r1  , const para& r2)
{
     float sub1 = (r2.a - r1.a);
     result=sub1*sub1; 
     return result;
     
}
float para::line2(const para& r1  , const para& r2)
{
     float sub2 = (r2.b - r1.b);
     result=sub2*sub2; 
     return result;
}
float para::square(const para& n1 ,const para& n2)
{
    result= sqrt(n1.result +n2.result);
    cout<<"Length of the line: "<<result<<endl;
     return result;
}
    

int main()
{
    para r1(7, 8); // This is called Implicit call.
    para r2= para(9,10); /// this is the another way to pass the argument. This is called explicit call.
    para real, complex,final;
    real.line1(r1, r2);
    complex.line2(r1, r2);
    r1.print(); 
    r2.print(); 
    final.square(real,complex);

 


return 0;
}



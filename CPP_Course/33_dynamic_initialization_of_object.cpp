///////////This program will tell you how object of a class based on constructor can be switched automatically by the compiler./////

#include<iostream>
#include<string>
using namespace std;

class dynamic
{
    string toy;
    int price;
    float sell;
    float discount;
    public:
    dynamic(){}                        // Note : This default constructor is must to compile the code because it let the complier to intialize the object even when the parameter is not passed.
    dynamic(string t, int p, int d) : toy(t),price(p),discount(d/100.0f) // parameterized constructor
    {
        sell = price*(1-discount);
    }

    dynamic(string t, int p, float d) : toy(t),price(p),discount(d) // parameterized overloading constructor
    {
         sell = price*(1-discount);
    }

    void market();

};
void dynamic::market()
{
    cout<<"The sell value of toy is: "<<sell<<endl;
}

int main()
{
    int p, d;
    float D;
    string t;
    dynamic t1,t2,t3, t4;
    cout<<"Enter the Toy Name:   ";
    cin>>t;
    cout<<endl;
    cout<<"Enter the Toy Price:   ";
    cin>>p;
    cout<<endl;
    cout<<"Enter the Toy Discount:   ";
    cin>>d;
    cout<<endl;
    t1=dynamic(t,p,d);                           //Dynamic initialization of object using constructor based on user input
    t1.market();

    cout<<"Enter the Toy Name:   ";
    cin>>t;
    cout<<"Enter the Toy Price:   ";
    cin>>p;
    cout<<endl;
    cout<<"Enter the Toy Discount:   ";
    cin>>d;
    cout<<endl;
    t2=dynamic(t,p,d);                           //Dynamic initialization of object using constructor based on user input
    t2.market();

    cout<<"Enter the Toy Name:   ";
    cin>>t;
    cout<<"Enter the Toy Price:   ";
    cin>>p;
    cout<<endl;
    cout<<"Enter the Toy Discount:   ";
    cin>>D;
    t3=dynamic(t,p,D);                           //Dynamic initialization of constructor based on user input
    cout<<endl;
    t3.market();

    return 0;
}


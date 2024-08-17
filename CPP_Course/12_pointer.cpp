 #include<iostream>
 using namespace std;
//Pointer is a datatype which holds the address of other data types.
int main()
{
    int a = 32;
    int *b= &a;    //&(address of operator) || *(dereference operator)(this is used to see, what is stored on this particular address)
    int**c= &b;    //pointer to pointer
    cout<<"Value of a =  "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
    cout<<"value stored at address "<<b; cout<<" is: "<<*b<<endl;
    cout<<"Value of **c: "<<**c<<endl;
    cout<<"Value of *c: "<<*c<<endl;
    cout<<"Value of address c: "<<c<<endl;

    return 0;
}
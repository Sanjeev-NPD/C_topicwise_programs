/*In call by value, the function receives copies of the arguments, so any modifications made to the parameters inside 
the function do not affect the original variables.

In call by reference, the function receives references to the original variables, allowing it to modify the actual
 values of the variables passed in.*/

#include<iostream>
using namespace std;
int a, b;

/// this function is useless because it is not returning anything, so the number will not swap ////////////////////////////////////////
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

}
////////////////////////////////////////////////////To make the above function working apply below methods/////////////////////////

void swapPointer(int *a, int *b)                   // This is call by pointer
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

///////////////////////////////////////////////////Another method is call by reference//////////////////////////
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    cout<<"Enter The value of a : "<<endl;
    cin>>a;
    cout<<"Enter The value of b : "<<endl;
    cin>>b;
    swap(a,b);                            //This is only pasting the value of a and b in the swap function and nothing . This is call by value.
    cout<<"The swapped value of a is "<<a<<endl;
    cout<<"The swapped value of b is "<<b<<endl;

    swapPointer(&a,&b);                          // This method of calling the function is known as call by reference using pointer.
    cout<<"The swapped value of a is "<<a<<endl;
    cout<<"The swapped value of b is "<<b<<endl;                            
    
    swapReference(a,b);                          //  This method of calling the function is known as call by reference using reference variable.
    cout<<"The swapped value of a is "<<a<<endl;
    cout<<"The swapped value of b is "<<b<<endl;

    return 0;
}
/*Templetes:  Templates in C++ allow you to create functions and classes that can operate with any data type. This is a powerful feature that promotes code reusability and type safety. 
Templates are especially useful when you want to write generic code that works with different data types without duplicating the code for each type.
Why to use templete ?
1. To prevent DRY: Don't Repeat Yourself
2. For generic code.

syntax: 
1. Function Templates:

template <typename T>
returnType functionName(parameters) {
    // Function body
}

2. Class Templates

template <typename T>
class ClassName {
    // Class members and methods
};

 Multiple Template Parameters:

 1. Function Template with Multiple Parameters:
    template <typename T1, typename T2>
    void printPair(T1 first, T2 second) {
    cout << "First: " << first << ", Second: " << second << endl;}
     
2. Class Template with Multiple Parameters:

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};
 

*/ 

#include<iostream>
using namespace std;

    template <typename T>
    T first(T a, T b)
    {
        return(a>b) ? a:b;
    }

int main()
{
    cout<<"The gretest number is: "<<first(2,3)<<endl;
    cout<<"The gretest number is: "<<first(2.2,3.2)<<endl;
    cout<<"The gretest number is: "<<first('s','k')<<endl;

return 0;

}
// #include <iostream>

// class Animal {
// public:
//     virtual void sound() { // Virtual function
//         std::cout << "Some generic animal sound." << std::endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() override { // Override the virtual function
//         std::cout << "Woof!" << std::endl;
//     }
// };

// int main() {
//     Animal* myAnimal = new Dog();
//     myAnimal->sound(); // Calls Dog's version of sound()

//     delete myAnimal;
//     return 0;
// }

// Another example of single_inheritance with some private members

#include<iostream>
#include<string>
using namespace std;

class A
{
    private:
    int x;
    public:
    
    A(int l): x(l){}

    void take()
    {
        cout<<"The value of x is : "<<x<<endl;
    }
    
    
};

class B : public A
{
    private:
    int y;
    public:

    B(int l, int k) : A(l),y(k){}    //While defining the constructor of derived class first initialize the base class() and then Initialize derived class member (studentID) seperated by ","

    void give()
    {
        cout<<"The value of y is : "<<y<<endl;
    }
    
};

int main()
{
    B test1(3,5);
    test1.take();
    test1.give();

    return 0;
}

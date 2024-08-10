/*Inheritance in C++ is a fundamental concept of object-oriented programming (OOP) that allows a new class (called the derived or child class) to inherit properties and behaviors (attributes 
and methods) from an existing class (called the base or parent class). This promotes code reusability, logical hierarchy, and the ability to create more complex systems by building upon 
existing code.

1. Base Class (Parent Class): The class whose properties and methods are inherited by another class (Example below).

class Animal {
public:
    void eat() {
        std::cout << "This animal eats food." << std::endl;
    }
};

2. Derived Class (Child Class): The class that inherits from the base class and can add new properties or override existing ones (Example below).
class Dog : public Animal {
public:
    void bark() {
        std::cout << "The dog barks." << std::endl;
    }
};

Syntax: class DerivedClass : accessSpecifier BaseClass {  
// additional members and methods specific to DerivedClass  //  }; In the above ex: class Dog : public Animal == class DerivedClass : accessSpecifier BaseClass, respectively.
DerivedClass: The new class being created;   BaseClass: The existing class that DerivedClass will inherit from;    accessSpecifier: Specifies the inheritance type (public, protected, or private)

Types of inheritance are 3 which is mentioned in above line but it has 5 different form:
1. Single 2.Multiple 3.Hierarchical 4.Multilevel and 5. Hybrid. 
*/

#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"Animals eat food"<<endl;
    }

};

class dog : public Animal
{
    public:
    void bark()
    {
        cout<<"The dogs bark"<<endl;
    }
};

int main()
{
    dog activity;
    activity.bark();
    activity.eat();
    return 0;
}




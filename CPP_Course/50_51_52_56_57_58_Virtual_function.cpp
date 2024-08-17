/*Virtual function: A virtual function is a function in a base class that is declared using the keyword virtual. It is intended to be overridden in any derived class that inherits from the
 base class. The key idea is to allow the derived class to provide its own implementation of the function.*/

#include<iostream>
#include<string>
using namespace std;

class Animal
{
    public:
    virtual void sound()                   //This is the virtual  function
    {
        cout<<"Some generic sound of animals"<<endl;
    }
};

class dog : public Animal
{
    public:
    void sound() override                   //overrid the virtual funtion
    {
        cout<<"Dog barks"<<endl;
    }
};

class cat : public Animal   //public dog  || Here we can inherit cat from dog class too and result will be same. 
{
    public:
    void sound() override                     //overrid the virtual funtion
    {
        cout<<"Cat Meows"<<endl;
    }
};


int main()
{
    Animal feature;
    feature.sound();

    Animal *myanimal1 = new dog();           //calling the dog class               // pointer to object  // new keyword
    myanimal1->sound();                      //calling the dog function            // Arrow operator.
                                            
    Animal *myanimal2 = new cat();           //calling the cat class
    myanimal2->sound();                      //calling the cat function
                        
    delete myanimal2;
    delete myanimal1;

    // Another way of doing the same via Polymorphic array or Collection

    // Animal* myanimal[] = {new dog(), new cat()};            // pointer of array program 52

    // for (int i = 0; i <2; i++)
    // {
    //     myanimal[i]->sound();
    // }

    // for (int i = 0; i <2; i++)
    // {
    //     delete myanimal[i];
    // }

    return 0;
}

/*Pure virtual funtion : A pure virtual function is a virtual function that is declared in a base class but has no implementation in that class. Instead of providing an implementation, 
the function is set to 0, making the base class abstract. Derived classes are then required to provide their own implementation of this function.*/

// #include<iostream>
// #include<string>
// using namespace std;

// class  animal
// {
//     public:
//     virtual void sound()=0;                         //This is the pure virtual class
// };

// class  dog :  public animal 
// {
//     public:
//     void sound() override                           //overrid the virtual funtion
//     {
//         cout<<"The dog barks"<<endl;
//     }
// };

// class  cat : public animal
// {
//     public:
//     void sound() override                          //overrid the virtual funtion
//     {
//         cout<<"The cat meows"<<endl;
//     }
// };

// int main()
// {
//     animal* mydog= new dog();                      //calling the dog class
//     animal* mycat= new cat();                      //calling the cat class

//     mydog->sound();
//     mycat->sound();

//     return 0;
// }



//// Note : Why Use Pointers and the Arrow Operator, Why we are not approaching Direct Object Creation(like cat.c; dog.d ?

/*Polymorphism:
The main reason for using pointers and the arrow operator is to demonstrate polymorphism in C++. Polymorphism allows you to treat objects of different derived classes uniformly through a 
base class pointer.

Runtime Flexibility:
For example, imagine a function that takes an Animal* pointer and then, based on some condition or user input, decides whether to make it point to a dog or a cat. This kind of runtime
decision-making is only possible with pointers (or references) to base classes.

Dynamic Memory Allocation:
dynamic allocation is useful when the object's lifetime needs to extend beyond the current scope or when managing resources like memory pools.

Polymorphic Arrays or Collections:
If you want to create a collection (like an array or vector) that can store objects of different derived types, you'll need to use pointers or references to the base class. For example, 
you could have an array of Animal* where each element could point to either a dog, a cat, or any other class derived from Animal.

Animal* animals[] = { new dog(), new cat(), new dog() };

for (int i = 0; i < 3; ++i) {
    animals[i]->sound();  // Calls the appropriate sound() function for each object
}

for (int i = 0; i < 3; ++i) {
    delete animals[i];  // Clean up dynamically allocated memory
}
*/


// #include <iostream>
// using namespace std;
// // Pointer is a datatype which holds the address of other data types.
// int main()
// {
//     int a = 32;
//     int *b = &a;  //&(address of operator) || *(dereference operator)(this is used to see, what is stored on this particular address)
//     int **c = &b; // pointer to pointer
//     cout << "Value of a =  " << a << endl;
//     cout << "Value of b = " << b << endl;
//     cout << "value stored at address " << b;
//     cout << " is: " << *b << endl;
//     cout << "Value of **c: " << **c << endl;
//     cout << "Value of *c: " << *c << endl;
//     cout << "Value of address c: " << c << endl;

//     return 0;
// }

/////////////////////////simple example of Pointer//////////////////

#include <iostream>

int main()
{
    int var = 20; // actual variable declaration
    int *ptr;     // pointer variable

    ptr = &var; // store address of var in pointer variable

    std::cout << "Value of var variable: ";
    std::cout << var << std::endl;

    // print the address stored in pointer variable
    std::cout << "Address stored in ptr variable: ";
    std::cout << ptr << std::endl;

    // access the value at the address available in pointer
    std::cout << "Value of *ptr variable: ";
    std::cout << *ptr << std::endl;

    return 0;
}
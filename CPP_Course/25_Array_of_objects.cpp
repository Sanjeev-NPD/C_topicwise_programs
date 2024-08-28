// #include <iostream>
// #include <string>
// #include <limits>
// using namespace std;

// class object_array
// {
// private:
//     string name;
//     int id;
//     int salary;

// public:
//     void set_details(void)
//     {
//         cout << "Enter the Employee Name :      " << endl;
//         cin >> name;
//         cout << "Enter the Employee id :      " << endl;
//         cin >> id;
//         // while (!(cin >> id))
//         // {
//         //     cin.clear();
//         //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         //     cout << "Invalid Input. Please enter an interger value" << endl;
//         // }
//         cout << "Enter the Salary of employee:     " << endl;
//         cin >> salary;
//     }

//     void get_details(void)
//     {
//         cout<<endl<<endl;
//         cout << "Employee name :   " << name << endl;
//         cout << "Employee id :   " << id << endl;
//         cout << "Salary of Employee:  Rs." << salary << endl;
//         cout<<endl<<endl;
//     }
// };

// int main()
// {
//     /////////////// This is the conventional method which is not feasible for purpose of very large data entery/////////////////

//     // object_array vikash, kirti, mohan, jadon;
//     // vikash.set_details();
//     // vikash.get_details();
//     // kirti.set_details();
//     // kirti.get_details();
//     // mohan.set_details();
//     // mohan.get_details();
//     // jadon.set_details();
//     // jadon.get_details();

//     ////////////////////So to overcome this issue we can create the array of object and can take the inputs one by one by calling it in loop//////////////////////////

//     object_array sk[4];
//     for (int i = 0; i < 3; i++)
//     {
//         sk[i].set_details();
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         sk[i].get_details();
//     }

//     return 0;
// }

////////////////////// Now we will see that how we can pass an object as argument to function///////////
/*In C++, passing objects as arguments to functions can be necessary or beneficial for several reasons. Let's explore why and when you might need
 or want to pass an object to a function:

1. Encapsulation and Modularity
Passing objects as arguments helps in maintaining encapsulation and modularity in your code. By passing an object, you can manipulate its data and
behavior without exposing its internal structure directly.

2. Functionality Extension
You might want to extend the functionality of a class by defining functions that operate on its objects. For example, you can have functions that 
compare two objects, print an object, or modify an object's data.

3. Code Reusability
Functions that accept objects as arguments can be reused with different objects, enhancing code reusability. For example, a function that 
calculates the area of different shapes can take shape objects as arguments.

4. Overloaded Operators
Operator overloading often requires passing objects as arguments to enable natural syntax for operations like addition, subtraction, etc.

5. Avoid Global Variables
Passing objects as arguments avoids the use of global variables, which can lead to code that is harder to maintain and debug.

When to Pass Objects
By Value: Use this when you need a copy of the object and do not want changes to the original object.
By Reference: Use this when you want to modify the original object or when the object is large, and copying it would be inefficient.
By Const Reference: Use this when you do not want to modify the original object and want to avoid the overhead of copying.*/

#include<iostream>
#include<string>
using namespace std;

class object_argument
{
    private:

    int a;
    int b;

    public:  

    void set_value(int x, int y)
    {
        a = x;
        b = y;
    }
    
    void object(object_argument p1, object_argument p2)
    {
        a = p1.a + p2.a;
        b = p1.b + p2.b;
    }

    void print()
    {
        cout<<"The Complex sum value is: "<<a<<"+"<<b<<"i"<<endl;
    }

    
};

int main()
{
    object_argument c1,c2,c3;
    c1.set_value(1,2);
    c1.print();
    c2.set_value(3,4);
    c2.print();
    c3.object(c1,c2);
    c3.print();

    return 0;
} 




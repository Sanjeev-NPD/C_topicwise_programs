/* Vector :vector in C++ is the class template that contains the vector container and its member functions.
 It is defined inside the <vector> header file.

Syntax to Declare Vector in C++ :
vector<dataType> vectorName;

1. Initialization Using List:
vector<dataType> name({ value1, value2, value3 ....});

2.  Initialization With a Single Value  //Here, we specify the size of the vector and then initialize every element of
vector<dataType> name(size, value);     //the vector with the value.

3. Initialization From Another Vector
vector<dataType> name(other_vec);

*/

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> get; // get is integer vector. get is object of class vector.
//     for (int i = 0; i < 10; i++)
//     {
//         get.push_back(i); // It push the elements into a vector from the back
//     }
//     for (auto i = get.begin(); i < get.end(); i++)
//     {
//         cout << *i + 1 << " ";
//     }

//     return 0;
// }

//////////////// another example of vector array////////////////////////////
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    volatile int i = 1;
    int count;
    vector<int> vect;
    cout << "Enter the value" << endl;
    while (i == 1)
    {
        cin >> count;
        if (count == 00)
        {
            i = 0;
        }
        else
            vect.push_back(count);
    }

    for (auto i = vect.begin(); i != vect.end(); i++)
    {
        cout << *i << " ";
    }
    
    return 0;
}
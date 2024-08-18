#include <iostream>
using namespace std;
double table, input;

int main()
{
    while (1)
    {
        cout << "Enter the value for which you want the table" << endl;
        cin >> input;
        for (int i = 1; i <= 10; i++)
        {
            table = input * i;
            cout << "Table of" << input;
            cout << "is: " << table << endl;
        }
    }
    return 0;
}

////////////////////Range based array//////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    // Using auto (copy)
    for (auto i : a)                  /// Range based array
    {
        i *= 2; // modifies the copy, not the original array
    }
    // a remains unchanged: {1, 2, 3, 4, 5}

    // Using auto& (reference)
    for (auto &i : a)
    {
        i *= 2; // modifies the original array
    }
    // a is now: {2, 4, 6, 8, 10}

    return 0;
}

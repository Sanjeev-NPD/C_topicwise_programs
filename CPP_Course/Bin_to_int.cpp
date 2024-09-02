#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class convertor
{
public:
    string input;
    int value = 0;

    void set()
    {
        cout << "Enter the binary number: ";
        cin >> input;
        cout << endl;
    }
    void binary()
    { 
        int length = input.length();
        value = 0;
        for (int j = 0; j<length; j++)
        {
            if (input[length-j-1] == '1')
            {
                value += pow(2, j);
            }
        }
        cout << "integer value = " << value;
    }
};

int main()
{
    convertor c1;
    c1.set();
    cout << "Interger value of the binary number: " << c1.input << endl;
    c1.binary();
    return 0;
}

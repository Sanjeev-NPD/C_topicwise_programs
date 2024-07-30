/// Write a program to find the nth value the of a string///

#include <iostream>
#include <string>
using namespace std;

string s;

void identify()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'j')
        {
            cout << "I have identified j at " << i << " Position" << endl;
            cout << "Changing this value with B" << endl;
            s.at(i) = 'B';
            cout << s;
        }
    }
}

int main()
{
    cout << "Enter the string" << endl;
    cin >> s;
    identify();
    return 0;
}
// program that will take input from user and it will report whether it is binary or not and if it is binary then it do the ones complement of the same.

#include <iostream>
#include <string>
using namespace std;

/////////////////// This the simple class with multiple function program///////////////////

// class nesting
// {
// private:
//     string s;

// public:
//     void read(void);
//     void validate_bin(void);
//     void ones_compl(void);
//     void display(void);
// };

// void nesting::read(void)
// {
//     cout << "Enter the Binary Number" << endl;
//     cin >> s;
// }
// void nesting::validate_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "This is not a valid Binary" << endl;
//             exit(0);
//         }
//     }
// }
// void nesting::ones_compl(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '1')
//         {
//             s.at(i) ='0';
//         }
//         else
//         {
//             s.at(i)='1';
//         }
//     }
// }
// void nesting::display(void)
// {
//     cout << "This is your binary number" << endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout << endl;
// }

// int main()
// {
//     nesting Start;
//     Start.read();
//     Start.validate_bin();
//     Start.display();
//     Start.ones_compl();
//     cout<<"Below is your ones_complement value"<<endl;
//     Start.display();

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////

/////////Below is the nesting programm with above funtions////////////////////////////////////////

class nesting
{
private:
    string s;
    void validate_bin(void);

public:
    void read(void);
    // void validate_bin(void);
    void ones_compl(void);
    void display(void);
};

void nesting::read(void)
{
    cout << "Enter the Binary Number" << endl;
    cin >> s;
    validate_bin();
}
void nesting::validate_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "This is not a valid Binary" << endl;
            exit(0);
        }
    }
}
void nesting::ones_compl(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) ='0';
        }
        else
        {
            s.at(i)='1';
        }
    }
}
void nesting::display(void)
{
    cout << "This is your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    nesting Start;
    Start.read();
    // Start.validate_bin();
    Start.display();
    Start.ones_compl();
    cout<<"Below is your ones_complement value"<<endl;
    Start.display();

    return 0;
}
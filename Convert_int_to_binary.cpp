/////////This programm will accept the input from the user as integer and return the value in binary, and also it will do the binary reversal operation/////////////////

#include <iostream>
#include <string>
using namespace std;

class binary
{
public:
    int i = 0;
    int num[100];
    int count = 0;
    void convertor(int input)
    {
        while (input > 0)
        {
            num[i] = input % 2;
            input = input / 2;
            if (num[i] == 1)
            {
                count++;
            }
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << num[j];
        }
        cout << endl;
        cout << "The number of One's is : " << count << endl;
    }
    void negation()
    {
        for (int k = i - 1; k >= 0; k--)
        {
            if (num[k] == 1)
            {
                num[k] = 0;
            }
            else
            {
                num[k] = 1;
            }
            cout<<num[k];
        }
        cout<<endl;
    }
};

int main()
{
    binary c1;
    int input = 89;
    cout << "Binary value of: " << input << endl;
    c1.convertor(input);
    cout<<"The negation of the binary is: "<<endl;
    c1.negation();
    return 0;
}
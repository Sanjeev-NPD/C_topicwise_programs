#include <iostream>
using namespace std;

int longestBinaryGap(int N)
{
    double zero = 0;
    int first1 =0;
    long long int final =0;
    while (N > 0)
    {
        if (N & 1)
        {
            first1=1;
            if(zero>0)
            {
                if(zero>final)
                {
                    final =zero;
                }
                
                zero =0;
            }
        }

        else if(first1==1)
        {      
                zero++;                 
        }      
        N >>= 1;
    }
    //  cout << final; 
     return final;
}

int main()
{
    int N = 5;
    cout << "Longest Binary Gap: " << longestBinaryGap(N)<< endl;

    return 0;
}

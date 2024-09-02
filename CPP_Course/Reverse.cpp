//sorting
#include <iostream>
using namespace std;
int series[]={0,1,8,7,6,2,4,9,5,3,9};
int length= sizeof(series)/sizeof(series[0]);
void reverse()
{
    for(int k =0; k<length-1; k++)
    {
        for(int j =0; j<(length-k-1); j++)
        {
            if(series[j]>series[j+1])
            {
               int temp = series[j];
               series[j]= series[j+1];
               series[j+1]=temp;
            }
        }
    }
}
int main() 
{
    cout << "Reverse of : ";
    for(int i= 0; i<length-1;i++)
    {
        cout<<series[i];
    }
    cout<<endl;
    cout << "is : ";
    reverse();
    for(int j= 0; j<(length-1)/2;j++)
    {
       cout<< series[j];
    }
    cout<< "-";
    for(int j= (length-2); j>(length-2)/2;j--)
    {
       cout<<series[j];
    }
    return 0;
}
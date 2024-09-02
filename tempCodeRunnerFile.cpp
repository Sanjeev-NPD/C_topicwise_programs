#include <iostream>
using namespace std;

int arr[] = {6,9,5,7,2,8,1,4,10,5};
int length = sizeof(arr) / sizeof(arr[0]);

void sorting()
{
    for(int k = 0; k < length - 1; k++)
    {
        for(int j = 0; j < length - k - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() 
{
    cout << "Array without sorting: ";
    for(int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; 
    
    sorting();
    
    cout << "Array after sorting: ";
    for(int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

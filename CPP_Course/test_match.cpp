// vector to find how many repeated numbers are there in the array
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void oddwala(vector<int>& arr)
{
    unordered_map<int, int> token;
    for(const int count : arr)
    {
        token[count]++;
        // cout << "Incrementing count for " << count << " now it is " << token[count] << endl;
    }

    for(const auto &count : token)
    {
        //  cout << "Checking count for " << count.first << ": " << count.second << endl;
        if(count.second %2 !=0)
        {
            cout<<"Value whose count is odd: "<<count.first<<endl;
        }
    }

}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    oddwala(arr);
    return 0;
}
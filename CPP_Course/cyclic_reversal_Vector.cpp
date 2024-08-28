/*cyclic reversal of any array*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> &A, int k)
{  
    int n= A.size();
    k=k%n;
    reverse(A.begin(),A.end());    
    reverse(A.begin(),A.begin()+ k);    
    reverse(A.begin()+k,A.end());    

    return A;
}

int main()
{
    vector<int> A= {1,2,3,4,5};
    int k=79;

    vector<int> result = solution(A,k);

    for(int x:result)
    {
        cout<< x <<" ";
    }

    return 0;
}

/*Reversing any vector element method*/

// #include <iostream>
// #include <vector>
// #include <algorithm> // For reverse

// using namespace std;

// vector<int> rotateVector(vector<int> &A) {
//     int n = A.size();

//     reverse(A.begin(), A.begin());           // Step 1: Reverse the entire vector

//     return A;
// }

// int main() {
//     vector<int> A = {1, 2, 3, 4, 5};
//     vector<int> result = rotateVector(A);

//     for (int x : result) 
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

/*program to find the no. of odd pairs*/


// #include<iostream>
// #include<vector>
// using namespace std;

// int solution(vector<int> &A)
// {
//     int j,i;
//     int n =A.size();
//     for( i =0; i<n;i++)
//     {
//         bool flag =false;
//         for(j=i+1; j<n;j++)
//         {
//             if(A[i]==A[j])
//             {
//                 flag = true;
//                 A[j]=0;
//                 break;
//             }
//         }
//         if(flag == false)
//         {
//             if(A[i]!=0)
//             {
//                 cout<<A[i]<<" ";
//             }
            
//         }   
//     }    
// }

// int main()
// {
//     vector<int> A = {9, 3, 9, 3, 9, 7, 9};
//     int result = solution(A);
    
//     return 0;
// }

/*Correct method(Hash Map Method) */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void findUnpairedElements(const vector<int>& A) {
    unordered_map<int, int> elementCount;

    // Count the occurrences of each element
    for (int num : A) {
        elementCount[num]++;
    }

    // Print the elements that appear an odd number of times
    for (const auto& pair : elementCount)
    {
     
        if (pair.second % 2 != 0)
        {
            cout << "Unpaired element: " << pair.first <<endl;
        }
        
    }
}

int main() {
    vector<int> A = {9, 3, 9, 3, 9, 7, 9, 8, 12, 14, 9, 3, 9, 3,9};
    findUnpairedElements(A);

    return 0;
}


// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int input[] = {3, 4, 6, 2, 1, 8, 9, 7, 5};
// int target = 9;

// int main()
// {
//     // compare();
//     int result;
//     for (int i = 0; i < 9; i++)
//     {
//         result = target - input[i];
//         for (int j = 0; j < 9; j++)
//         {
//             if (input[j] == result)
//             {
//                 cout << "1st Value: " << result << " 2nd Value: " << input[i] << " at position: " << j << " " << i << endl;
//                 input[i] = 0;
//                 input[j] = 0;
//             }
//         }
//     }
// }


/////////////////////////// Best way of practice///////////////////////////


#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int input[] = {3, 4, 6, 2, 1, 8, 9, 7, 5};
    int target = 9;
    unordered_set<int> seen;

    for (int i = 0; i < 9; i++)
    {
        int result = target - input[i];

        // Check if the complement exists in the set
        if (seen.find(result) != seen.end())
        {
            cout << "1st Value: " << result << " 2nd Value: " << input[i] << " at position: " << i << endl;
        }

        // Add the current element to the set
        seen.insert(input[i]);
    }
    for (int j=0;j<9;j++)
    {
        cout<<input[j]<<" ";
    }

    return 0;
}

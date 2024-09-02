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
    vector<int> A = {9, 3, 9, 3, 9, 7, 9, 8, 12, 14, 9, 3, 9, 3};
    findUnpairedElements(A);

    return 0;
}
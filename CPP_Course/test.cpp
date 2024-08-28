#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int binaryToDecimal(const string& binaryStr)
 {
    int decimalValue = 0;
    int length = binaryStr.length();

    // Iterate over each character in the binary string
    for (int i = 0; i < length; i++) {
        // Convert the character to an integer (0 or 1)
        int bit = binaryStr[length - i - 1] - '0';
        // Calculate the decimal value
        decimalValue += bit * pow(2, i);
    }

    return decimalValue;
}


int main() {
    // string binaryInput = "101010101010";
    char binaryInput[100] = "101010101010";

    int decimalValue = binaryToDecimal(binaryInput);
    cout << "The decimal value is: " << decimalValue << endl;

    return 0;
}

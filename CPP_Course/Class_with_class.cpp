#include <iostream>
#include <string>
#include <limits>
using namespace std;
int in, i;
string name_array[100];
string serial_array[100];
float price_array[100];
int total = 0;

void example(void)
{
    cout << "Enter the name of the toy: ";
    cin >> ws;
    getline(cin, name_array[total]);
    cout << "Enter the Serial no. of the toy: ";
    cin >> serial_array[total];
    cout << "Enter the price of the toy: ";
    while (!(cin >> price_array[total]))
    {
        cin.clear();                                         // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore bad input
        cout << "Invalid input. Enter a valid price: ";
    }
}

void display(void)
{
    while (1)
    {
        cout << "If you have more entry then press 1 and Enter otherwise 0 and Enter" << endl;
        while (!(cin >> in) || (in !=0 && in !=1))
    {
        cin.clear();                                         // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore bad input
        cout << "Invalid input. Enter a valid Command Number: ";
    }
        if (in == 1)
        {
            total++;
            example();
        }
        else
            break;
    }
    for (i = 0; i <= total; i++)
    {
        cout << "Name of the toy : " << name_array[i] << endl;
        cout << "Serial number of the toy : " << serial_array[i] << endl;
        cout << "Price of the toy : RS." << price_array[i] << endl;
    }
}

int main()
{
    example();
    display();
    return 0;
}

////////////////////////////////////////Below program is based classes ///////////////////////

// #include <iostream>
// #include <string>
// #include <limits>
// using namespace std;

// const int MAX_TOYS = 100;

// class Toy {
// private:
//     string name;
//     string serial;
//     float price;

// public:
//     void input() {
//         cout << "Enter the name of the toy: ";
//         cin >> ws; // Clear leading whitespace
//         getline(cin, name);

//         cout << "Enter the Serial number of the toy: ";
//         cin >> serial;

//         cout << "Enter the price of the toy: ";
//         while (!(cin >> price)) {
//             cin.clear(); // Clear error flags
//             cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore bad input
//             cout << "Invalid input. Enter a valid price: ";
//         }
//     }

//     void display() const {
//         cout << "Name of the toy: " << name << endl;
//         cout << "Serial number of the toy: " << serial << endl;
//         cout << "Price of the toy: Rs. " << price << endl;
//     }
// };

// class ToyStore {
// private:
//     Toy toys[MAX_TOYS];
//     int count;

// public:
//     ToyStore() : count(0) {}

//     void addToy() {
//         if (count < MAX_TOYS) {
//             toys[count].input();
//             count++;
//         } else {
//             cout << "Maximum number of entries reached." << endl;
//         }
//     }

//     void displayToys() const {
//         for (int i = 0; i < count; i++) {
//             toys[i].display();
//         }
//     }

//     void processEntries() {
//         int in;
//         do {
//             addToy();
//             cout << "If you have another entry, press 1 and Enter; otherwise, press 0 and Enter: ";
//             cin >> in;
//         } while (in == 1 && count < MAX_TOYS);

//         displayToys();
//     }
// };

// int main() {
//     ToyStore store;
//     store.processEntries();
//     return 0;
// }

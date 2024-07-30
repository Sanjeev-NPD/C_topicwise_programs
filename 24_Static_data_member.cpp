/////In this programm we will make some function and array which will hold the data as per our defined memory location with static members.

#include <iostream>
#include <string>
using namespace std;

class startup
{
private:
    string product[100];
    int product_id[100];
    int product_price[100];

public:
    static int count;           //This the static data member which will be used commonly across all the member functions and objects. To this write in public. If written private
    void Take_input(void);      //Then it will only accessible through class member function and not directly.
    void product_name(void);
    void id(void);
    void price();
    void report(void);
    void conclude(void);
};

int startup::count;            // while defining any static data it is compulsary to declare in both places i.e. inside class as well outside the class

void startup::Take_input(void)
{
    product_name();
    id();
    price();
    count++;
}

void startup::product_name()
{
    cout << "Enter the product Name" << endl;
    cin >> product[count];
}
void startup::id(void)
{
    cout << "Enter the product Id" << endl;
    cin >> product_id[count];
}
void startup::price(void)
{
    cout << "Enter the product Price" << endl;
    cin >> product_price[count];
}
void startup::report(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Product Name: " << product[i] << endl;
        cout << "Product Id: " << product_id[i] << endl;
        cout << "Product Price: Rs." << product_price[i] << endl;
    }
}

int main()
{
    startup center1;
    while (1)
    {
        center1.Take_input();
        if (startup::count == 2)
        {
            break;
        }
    }

    center1.report();
}
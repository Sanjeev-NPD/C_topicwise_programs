/*A union in C++ is a data structure that allows storing different data types in the same memory location, but only one value at a time. 
Key features include:

Memory Sharing: All members share the same memory, so the size of the union is the size of its largest member.
Mutual Exclusivity: Only one member can hold a value at any given time.
Access Control: The last written member's value is valid, accessing others leads to undefined behavior.*/


#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct resource
{
    int empid;
    string name;
    float height;
};

typedef struct convert
{
    int empid;
    string name;
    float height;
}tp;                      // typedef has converted to the name of "struct convert" to "tp". Ab isme hame pura "struct convert" likhne ki jarurat nahi hai "tp" se hi kaam chal jaayega.

int main()
{
    tp dekho;
    struct resource gazal;
    struct resource sangeet;
    gazal.empid = 001;
    sangeet.empid = 002;
    gazal.name ="Kalam";
    sangeet.name = "Hari";
    gazal.height = 5.9;
    sangeet.height = 6.0;
    dekho.name="typedef ka definition";

    cout<<"Id: "<<gazal.empid<<endl;
    cout<<"Id:"<<sangeet.empid<<endl;
    cout<<"name: "<<gazal.name<<endl;
    cout<<"name: "<<sangeet.name<<endl;
    cout<<"height: "<<gazal.height<<endl;
    cout<<"height: "<<sangeet.height<<endl;
    cout<<"name: "<<dekho.name<<endl;

    return 0;
}

// union : In union maximum memory acquired by any variable is set for all. In this way memory optimization is done.

// union purchase
// {
//     char car[50];
//     int price;
//     float range;
// };

// // int main()
// // {
// //     purchase gaddi;
// //     strcpy(gaddi.car,"BMW");              // to print the string in union go like this.
// //     // gaddi.price=10000000;
// //     // gaddi.range=50000000;

// //     cout<<"Car: "<<gaddi.car<<endl;
// //     // cout<<"Price:"<<gaddi.price<<endl;
// //     // cout<<"Range: "<<gaddi.range<<endl;

// //     return 0;
// // }

// // enum : Enums are used to create a collection of related constants to improve code readability and maintainability.

// int main()
// {
//     enum vehicle{BMW=2,THAR=3,LR=4};
//     vehicle count1 =BMW;
//     vehicle count2 =THAR;
//     vehicle count3 =LR;

//     cout<<count1<<count2<<count3;

//     return 0;
// }
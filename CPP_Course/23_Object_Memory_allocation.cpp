// /////In this programm we will make some function and array which will hold the data as per our defined memory location.

// #include <iostream>
// #include <string>
// using namespace std;

// class startup
// {
// private:
//     int count;
//     string product[100];
//     int product_id[100];
//     int product_price[100];
//     int counter(void)
//     {
//         count = 0;
//     }

// public:
//     void Take_input(void);
//     void product_name(void);
//     void id(void);
//     void price();
//     void report(void);
//     void conclude(void);
// };

// void startup::Take_input(void)
// {
//     product_name();
//     id();
//     price();
//     cout << "If you want to enter more data press Enter or write 0" << endl;
// }

// void startup::product_name()
// {
//     cout << "Enter the product Name" << endl;
//     cin >> product[count];
// }
// void startup::id(void)
// {
//     cout << "Enter the product Id" << endl;
//     cin >> product_id[count];
// }
// void startup::price(void)
// {
//     cout << "Enter the product Price" << endl;
//     cin >> product_price[count];
//     count++;
// }
// void startup::report(void)
// {
//     for (int i = 0; i < count; i++)
//     {
//         cout << "Product Name: " << product[i] << endl;
//         cout << "Product Id: " << product_id[i] << endl;
//         cout << "Product Price: Rs." << product_price[i] << endl;
//     }
// }

// int main()
// {
//     startup center1;
//     for (int i = 0; i < 5; i++)
//     {
//         center1.Take_input();
//     }
//     center1.report();
// }



///////////////////////Ignore the below programm. I have written it for my personal work(reverse of a string)///////////////

// #include<iostream>
// #include<algorithm>
// #include<string>

// using namespace std;

// int main()
// {   string data;
//     cout<<"enter the no. "<<endl;
//     getline(cin,data);
//     reverse(data.begin(),data.end());
//     cout<<data<<endl;
//     return 0;  
// }

// #include<iostream>
// #include<algorithm>
// #include<string>

// using namespace std;

// int main()
// {   string data="This is reverse";
//     cout<<"enter the no. "<<endl;
//     // getline(cin,data);
//     reverse(data.begin(),data.end());
//     cout<<data<<endl;
//     return 0;  
// } 

#include<iostream>
using namespace std;

char str[] = "Reverse of the statement"; 
int length =0;

int main()
{  
    while (str[length] !='\0')
    {
        length++;
    }

    for (int i = 0; i < length/2; i++)
    {
        int temp = str[i];
        str[i]= str[length -i-1];
        str[length-i-1]= temp;       
    }
    cout<<str;
    
    return 0;  
} 
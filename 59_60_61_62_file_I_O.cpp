/*eading and writing files in C++ is straightforward with the ifstream, ofstream, and fstream classes. You can read from and write to files using various methods depending on your needs, and 
proper error handling and resource management practices are essential for robust file operations.

1. ifstream: Used for reading from files.
2. ofstream: Used for writing to files.
3. fstream: Used for both reading and writing.
4. Error Handling: Always check if files open successfully to handle potential errors.
5. File Closing: Always close files after operations to ensure all data is written and resources are freed.
*/


/////////////////////////// Opening file using constructor and over-writing into it ///////////////

// #include<iostream>
// #include<string>
// #include<fstream>
// using namespace std;

// int main()
// {
//     string state1= "This is the first Statement";
//     ofstream out("Kholo_file.txt");
//   //ofstream out("C:\\DesiredDirectory\\Kholo_file.txt");  //Specify the full path where you want the file to be created.
//     if(!out)
//     {
//         cerr<<"File not found!"<<endl;
//     }
//     out<<state1<<endl;
//     out.close();                              // it closes the file after writing the data safely.
//     return 0;
// }

/////////// opening file using constructor and appending data into it/////////////////////

// #include<iostream>
// #include<string>
// #include<fstream>
// using namespace std;

// int main()
// {
//     string state2="This is the second line";
//     ofstream out("Kholo_file.txt",ios::app);
//   //ofstream out("C:\\DesiredDirectory\\Kholo_file.txt");  //Specify the full path where you want the file to be created.
//     if(!out)
//     {
//         cerr << "file not found !"<<endl;
//         return 1;
//     }
//     out<<state2<<endl;
//     out.close();                              // it close the file after writing the data safely.
//     return 0;
// }

///////// opening file using constructor and appending data into it with time /////////////////////

// #include<iostream>
// #include<string>
// #include<fstream>
// #include<ctime>
// using namespace std;

// int main()
// {
//     string statement ="This is the 3rd line with timestamp.";
//     ofstream go("Kholo_file.txt", ios::app);
//   //ofstream go("C:\\DesiredDirectory\\Kholo_file.txt");  //Specify the full path where you want the file to be created.
//     if(!go)
//     {
//         cerr<<"file not found !"<<endl;
//         return 1;
//     }
//     // Get the current time
//     time_t now = time(0);
//     tm *ltm = localtime(&now);

//     // Format the timestamp
//     go << "[" << 1900 + ltm->tm_year << "-"
//         << 1 + ltm->tm_mon << "-"
//         << ltm->tm_mday << " "
//         << ltm->tm_hour << ":"
//         << ltm->tm_min << ":"
//         << ltm->tm_sec << "] ";

//     go<<statement<<endl;
//     cout<<statement<<endl;
//     go.close();                              // it close the file after writing the data safely.
//     return 0;

// }


///////////////////////Opening file using constructor and reading it////////////////

// #include<iostream>
// #include<string>
// #include<fstream>
// using namespace std;

// int main()
// {
//     string state2;                   
//     ifstream in("Kholo_file.txt");             // Attempt to open the file for reading
//     if(!in)                                    // Check if the file was successfully opened
//     {
//       cerr<<"File doesn't exist !"<<endl;      //if not then message will be displayed.
//       return 1;                                // Exit with an error code
//     }
//     // in>>state2;                             // This will only take the first word as space will not read the next word, and to resolve this we use getline function
//     getline(in,state2);                        // Read a line from the file into state2
//     cout<<state2;                              // Optionally print the content to check on terminal
//     in.close();                              // it close the file after reading the data safely.
//     return 0;
// }


///////////////////////Opening file using constructor and reading the whole content of the file ////////////////

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string state2;                   
    ifstream in("Kholo_file.txt");             // Attempt to open the file for reading
    if(!in)                                    // Check if the file was successfully opened
    {
      cerr<<"File doesn't exist !"<<endl;      //if not then message will be displayed.
      return 1;                                // Exit with an error code
    }
    // in>>state2;                             // This will only take the first word as space will not read the next word, and to resolve this we use getline function
    while(getline(in,state2)){                     // Read a line from the file into state2
    cout<<state2<<endl; }                             // Optionally print the content to check on terminal
    in.close();                              // it close the file after reading the data safely
    return 0;
}




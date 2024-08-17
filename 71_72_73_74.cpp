// //swap lists
// #include <iostream>
// #include <list>
// using namespace std;

// int main ()
// {
//   list<int> first (3,100);   // three ints with a value of 100
//   list<int> second (5,200);  // five ints with a value of 200

//   first.swap(second);

//   cout << "first contains:";
//   for (list<int>::iterator it=first.begin(); it!=first.end(); it++)
//     cout << ' ' << *it;
//   cout << '\n';

//   cout << "second contains:";
//   for (list<int>::iterator it=second.begin(); it!=second.end(); it++)
//     cout << ' ' << *it;
//   cout << '\n';

//   return 0;
// }

////// map::max_size

// #include <iostream>
// #include <map>

// int main ()
// {
//   int i;
//   std::map<int,int> mymap;

//   if (mymap.max_size()<1000)
//   {
//     for (i=0; i<1000; i++) mymap[i]=0;
//     std::cout << "The map contains 1000 elements.\n";
//   }
//   else std::cout << "The map could not hold 1000 elements."<<mymap.max_size();

//   return 0;
// }


// Function objects:

#include<iostream>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
  int arr[] = {1,4,7,9,3,65,6,8,4};
  sort(arr, arr+9);
  for (int i = 0; i < 9; i++)
  {
    cout<<arr[i]<<endl;
  }
  

  return 0;
}

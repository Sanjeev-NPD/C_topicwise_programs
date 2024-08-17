// vector::push_back
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector;
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myvector.push_back (myint);
  } while (myint);

  cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

  return 0;
}


// more details of STL visit this website: https://cplusplus.com/reference/vector/vector/push_back/
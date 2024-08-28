#include<iostream>
#include<string>
#include<chrono>
#include<thread>
#include<algorithm>

using namespace std;

void Daemon()
{
    while (1)
    {
        cout << "This is Daemon thread."<< endl;
        this_thread::sleep_for(1000ms);
    }   
}

int main()
{
    thread t1(Daemon);
    t1.detach();
    this_thread::sleep_for(5000ms);

    return 0;
}
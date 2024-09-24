#include <stdio.h>
#include <windows.h>

int main() {
    SYSTEMTIME time;
    GetSystemTime(&time);

    // Calculate the time in milliseconds
    DWORD milliseconds = (time.wSecond * 1000) + time.wMilliseconds;

    printf("Current time: %02d:%02d:%02d.%03d\n", 
           time.wHour, time.wMinute, time.wSecond, time.wMilliseconds);
    printf("Milliseconds since the start of the second: %lu\n", milliseconds);

    return 0;
}

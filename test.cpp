#include <iostream>
#include <thread>
#include <chrono>

int main() {
    for (int i = 1; i <= 60; ++i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}

#include <stdio.h>

// Define a struct with bit fields
struct MyStruct {
    unsigned int a : 1;
    unsigned int b : 1;
    unsigned int c : 1;
    unsigned int d : 1;
};

int main() {
    // Initialize the struct with all bits set to 1
    struct MyStruct s = {1, 1, 1, 1};

    // Print the values of each member
    printf("a: %u\n", s.a);
    printf("b: %u\n", s.b);
    printf("c: %u\n", s.c);
    printf("d: %u\n", s.d);

    return 0;
}

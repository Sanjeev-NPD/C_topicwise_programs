/*1. malloc (Memory Allocation): 
It allocates a block of memory of a specified size and returns a pointer to the beginning of the block. The contents of the allocated memory are uninitialized, meaning they contain garbage 
values.
Syntax:       void* malloc(size_t size);
Example: 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for 5 integers
    ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Memory has garbage values, let's initialize and print them
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}



2. calloc (Contiguous Allocation):
It allocates memory for an array of elements, initializes all bits to zero, and returns a pointer to the memory. It’s similar to malloc, but it also 
zeroes the memory.
Syntax:              void* calloc(size_t num, size_t size);
Example: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for an array of 5 integers
    ptr = (int*)calloc(5, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Memory is initialized to zero, print the values
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}


3. realloc (Reallocation):
It is used to resize a previously allocated memory block. It can either increase or decrease the size of the memory block. If the new size is larger, the additional memory will be uninitialized.
Syntax:              void* realloc(void* ptr, size_t size);
Example: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for 5 integers
    ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Initialize memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    // Reallocate memory to hold 10 integers
    ptr = (int*)realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not reallocated.\n");
        return 1;
    }

    // Initialize the new memory and print all values
    for (int i = 5; i < 10; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}


4. free (Memory Deallocation):
It deallocates the memory previously allocated by malloc, calloc, or realloc. It frees up the allocated memory, making it available for future allocations.
Syntax:                          void free(void* ptr);
Example: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for 5 integers
    ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Initialize and print memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}



*/
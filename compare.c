#include <stdio.h>
#include <string.h>

int main() 
{
    const int ROWS = 5, COLS = 10;
    char array[ROWS][COLS] = {"banana", "apple", "orange", "grape", "cherry"};
    char temp[COLS];

    // Sorting the array using bubble sort
    for (int i = 0; i < ROWS - 1; i++) 
    {
        for (int j = i + 1; j < ROWS; j++) 
        {
            if (strcmp(array[i], array[j]) > 0) {
                // Swap array[i] and array[j]
                strcpy(temp, array[i]);
                strcpy(array[i], array[j]);
                strcpy(array[j], temp);
            }
        }
    }

    // Printing the sorted array
    printf("Sorted strings in alphabetical order:\n");
    for (int i = 0; i < ROWS; i++) 
    {
        printf("%s\n", array[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ArrayChallenge(char *input) {
    
    input++;
    input[strlen(input) - 1] = '\0';

    
    char *token;
    int arr[100]; 
    int index = 0;

    
    token = strtok(input, ", ");
    while (token != NULL) {
        arr[index++] = atoi(token); 
        token = strtok(NULL, ", ");
    }

   
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < index; i++) {
        maxEndingHere = (arr[i] > maxEndingHere + arr[i]) ? arr[i] : maxEndingHere + arr[i];
        maxSoFar = (maxSoFar > maxEndingHere) ? maxSoFar : maxEndingHere;
    }

 
    printf("%d\n", maxSoFar);
}

int main(void) {
   
    ArrayChallenge("{1, -2, 0, 3}");

    return 0;
}
#include <stdio.h>

int main() {
    int x = 10;  // Variable in main block
    printf("Outside inner block: x = %d\n", x);

    {   // Start of a new block
        int y = 20;  // Variable only accessible inside this block
        printf("Inside inner block: x = %d, y = %d\n", x, y);
    }   // End of the inner block

    // printf("Outside inner block: y = %d\n", y); // error= y is not accessible here

    return 0;
}

#include <stdio.h>

int main() {
    int num, i;

    // Taking number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing multiplication table
    printf("\nMultiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

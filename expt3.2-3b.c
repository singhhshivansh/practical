#include <stdio.h>

int main() {
    int n = 5;  // Number of rows
    int coef, i, j, space;

    for (i = 0; i < n; i++) {
        // Printing leading spaces
        for (space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        // Calculating binomial coefficients
        coef = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

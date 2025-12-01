#include <stdio.h>

// Recursive function for factorial
long FACT_recursive(int num) {
    if (num == 0)
        return 1;
    else
        return num * FACT_recursive(num - 1);
}

// Non-recursive function for factorial
long FACT_nonrecursive(int num) {
    long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute binomial coefficient using nCr = n! / (r! * (n-r)!)
long binomial_coeff_recursive(int n, int r) {
    return FACT_recursive(n) / (FACT_recursive(r) * FACT_recursive(n - r));
}

long binomial_coeff_nonrecursive(int n, int r) {
    return FACT_nonrecursive(n) / (FACT_nonrecursive(r) * FACT_nonrecursive(n - r));
}

int main() {
    int n, r, choice;
    printf("=== Binomial Coefficient Calculator (nCr) ===\n");
    printf("1. Using Recursive Function\n");
    printf("2. Using Non-Recursive Function\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n) {
        printf("Invalid input! r cannot be greater than n.\n");
        return 0;
    }

    long result;
    if (choice == 1)
        result = binomial_coeff_recursive(n, r);
    else
        result = binomial_coeff_nonrecursive(n, r);

    printf("\nBinomial Coefficient C(%d, %d) = %ld\n", n, r, result);

    // Tabulate results for 0 ≤ r ≤ n
    printf("\n--- Table of Binomial Coefficients for n = %d ---\n", n);
    printf(" r\tC(n,r)\n");
    printf("------------------\n");
    for (int i = 0; i <= n; i++) {
        if (choice == 1)
            printf(" %d\t%ld\n", i, binomial_coeff_recursive(n, i));
        else
            printf(" %d\t%ld\n", i, binomial_coeff_nonrecursive(n, i));
    }

    return 0;
}
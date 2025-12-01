#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    if (num <= 1)
        return 0;  // 0 and 1 are not prime

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;  // Not prime
    }

    return 1;  // Prime number
}

int main() {
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
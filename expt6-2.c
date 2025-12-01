#include <stdio.h>

// Recursive function to find GCD using Euclidean algorithm
int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;   // Base case
    else
        return GCD(num2, num1 % num2);  // Recursive call
}

int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // If numbers are negative, make them positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    result = GCD(num1, num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
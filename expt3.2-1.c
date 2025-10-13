#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0;
    char choice;

    do {
        // Taking a number from the user
        printf("Enter a number: ");
        scanf("%d", &num);

        // Checking the type
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        // Asking user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    // Displaying results
    printf("\nCount of Positive numbers: %d", pos);
    printf("\nCount of Negative numbers: %d", neg);
    printf("\nCount of Zeroes: %d\n", zero);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nPositive: ");
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nNegative: ");
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nOdd: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nEven: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
    return 0;
}
#include <stdio.h>

int main() {
    int n, i, largest, second;
    
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find largest
    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Find second largest
    second = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }
    
    printf("Second largest: %d\n", second);
    
    return 0;
}
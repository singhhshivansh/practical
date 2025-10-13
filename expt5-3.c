#include <stdio.h>

int main() {
    int n, i, num, freq = 0;
    
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to find frequency: ");
    scanf("%d", &num);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            freq++;
        }
    }
    
    printf("Frequency of %d is: %d\n", num, freq);
    
    return 0;
}
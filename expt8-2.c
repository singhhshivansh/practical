#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'X', 'Y', 'Z'};

    int *p1 = a;
    float *p2 = b;
    char *p3 = c;

    printf("Original:  %p -> %d, %p -> %.1f, %p -> %c\n",
           (void*)p1, *p1, (void*)p2, *p2, (void*)p3, *p3);

    p1++; p2++; p3++; // increment pointers

    printf("After ++: %p -> %d, %p -> %.1f, %p -> %c\n",
           (void*)p1, *p1, (void*)p2, *p2, (void*)p3, *p3);

    p1--; p2--; p3--; // back to start

    printf("After --: %p -> %d, %p -> %.1f, %p -> %c\n",
           (void*)p1, *p1, (void*)p2, *p2, (void*)p3, *p3);

    return 0;
}

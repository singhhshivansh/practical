#include <stdio.h>

int update(int *x, int *y) {
    *x = *x + 5;
    *y = *y * 2;
    return 0;
}

int main() {
    int a = 10, b = 4;

    printf("Before: a = %d, b = %d\n", a, b);

    update(&a, &b);

    printf("After:  a = %d, b = %d\n", a, b);

    return 0;
}

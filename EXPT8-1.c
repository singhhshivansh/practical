#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("a = %d,  p1 = %p,  *p1 = %d\n", a, (void*)p1, *p1);
    printf("b = %.1f, p2 = %p,  *p2 = %.1f\n", b, (void*)p2, *p2);
    printf("c = %c,   p3 = %p,  *p3 = %c\n", c, (void*)p3, *p3);

    return 0;
}


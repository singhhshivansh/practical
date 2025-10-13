#include <stdio.h>

int main() {
    int a, b, c, d;
    int L;

    printf("Enter the limit (L): ");
    scanf("%d", &L);

    printf("Ramanujan numbers up to %d:\n", L);

    for (a = 1; a <= L; a++) {
        for (b = a; b <= L; b++) {
            for (c = a + 1; c <= L; c++) {
                for (d = c; d <= L; d++) {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;

                    if (sum1 == sum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

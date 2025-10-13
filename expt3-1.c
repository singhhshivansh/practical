#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        // Equilateral
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        else {
            // Isosceles 
            if (a == b) {
                printf("It is an Isosceles triangle.\n");
            }
            else if (b == c) {
                printf("It is an Isosceles triangle.\n");
            }
            else if (a == c) {
                printf("It is an Isosceles triangle.\n");
            }

            // Right-angled 
            if (a*a + b*b == c*c) {
                printf("It is a Right-angled triangle.\n");
            }
            else if (a*a + c*c == b*b) {
                printf("It is a Right-angled triangle.\n");
            }
            else if (b*b + c*c == a*a) {
                printf("It is a Right-angled triangle.\n");
            }

            // Scalene (all sides different + not right-angled, not isosceles)
            if (a != b && b != c && a != c &&
                !(a*a + b*b == c*c) &&
                !(a*a + c*c == b*b) &&
                !(b*b + c*c == a*a)) {
                printf("It is a Scalene triangle.\n");
            }
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}

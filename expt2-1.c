#include <stdio.h>
int main() {
    float length,width;
    printf("Enter length:");
    scanf("%f", &length);
    printf("Enter width:");
    scanf("%f", &width);

    printf("Area = %f\n", length * width);
    printf("Perimeter = %f\n", 2 * (length + width));

    return 0;

}
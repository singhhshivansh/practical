#include <stdio.h>


int main() {
    //Declaring Variables
    int x1, y1, x2, y2, x3, y3;
    int area;
//Taking coordinates from the user
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    // Calculating twice the area of the triangle
    area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}

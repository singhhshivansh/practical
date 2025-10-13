#include <stdio.h>

int counter = 0;  // Global variable

void increase() {
    counter = counter + 1;
    printf("Inside increase(): counter = %d\n", counter);
}

void decrease() {
    counter = counter - 1;
    printf("Inside decrease(): counter = %d\n", counter);
}

int main() {
    printf("Initial counter = %d\n", counter);

    increase();   // counter becomes 1
    decrease();   // counter becomes 0

    printf("Final counter = %d\n", counter);
    return 0;
}

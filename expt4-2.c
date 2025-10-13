#include <stdio.h>

int globalVar = 100;  // Global variable

void myFunction() {
    int localVar = 50;  // Local variable
    printf("Inside function: localVar = %d, globalVar = %d\n", localVar, globalVar);
}

int main() {
    myFunction();

    printf("Outside function: globalVar = %d\n", globalVar);

    return 0;
}

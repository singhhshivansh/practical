#include <stdio.h>

void numberadd() {
    static int number = 5;  // static local variable
    printf("number = %d\n", number);
    number = number + 2;    // value persists between calls
}

int main() {
    numberadd();  // number = 5
    numberadd();  // number = 7
    numberadd();  // number = 9
    return 0;
}

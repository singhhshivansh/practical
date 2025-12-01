#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int i, len;
    char temp;
    
    len = strlen(str);  // find length of string

    for (i = 0; i < len / 2; i++) {
        // swap characters
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // (for simplicity; use fgets in safer code)

    REVERSE(str);  // call the function to reverse the string

    printf("Reversed string: %s\n", str);

    return 0;
}
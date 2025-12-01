#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

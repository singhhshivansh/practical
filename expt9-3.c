#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}

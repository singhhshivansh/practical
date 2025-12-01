#include <stdio.h>

int main() {
    FILE *fp;

    
    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    
    fprintf(fp, "This is Experiment 9 - File Handling in C.\n");
    fprintf(fp, "This text is written into the file.\n");

    fclose(fp);

    printf("File created and text written successfully.\n");

    return 0;
}

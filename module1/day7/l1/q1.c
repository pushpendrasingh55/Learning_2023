#include <stdio.h>

int main() {
    FILE *fp, *df;
    char ch;

    // Open the source file in read mode
    fp = fopen("emp.txt", "r");
    if (fp == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    df = fopen("copy.txt", "w");
    if (df == NULL) {
        printf("Failed to open the destination file.\n");
        fclose(fp);
        return 1;
    }

    // Read each character from the source file and write it to the destination file
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, df);
    }

    // Close the files
    fclose(fp);
    fclose(df);

    printf("File copied successfully.\n");
    return 0;
}

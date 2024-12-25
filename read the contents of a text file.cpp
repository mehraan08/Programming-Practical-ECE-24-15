
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("filename.txt", "r"); // Open file in read mode

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp); // Close the file

    return 0;
}

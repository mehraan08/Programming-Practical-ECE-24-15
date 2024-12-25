#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("filename.txt", "w"); // Open file in write mode

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a string to write: ");
    fgets(str, 100, stdin);

    fprintf(fp, "%s", str); // Write string to file

    fclose(fp); // Close the file

    printf("Data written to file successfully.\n");

    return 0;
}

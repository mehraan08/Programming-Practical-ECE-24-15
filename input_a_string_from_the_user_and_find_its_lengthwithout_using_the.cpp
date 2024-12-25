#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    length = strlen(str) - 1; // -1 to exclude the newline character

    printf("Reverse of the string: ");
    for (i = length; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

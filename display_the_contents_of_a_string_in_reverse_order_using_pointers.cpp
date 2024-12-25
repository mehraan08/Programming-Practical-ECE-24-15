#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "hello";
    char *ptr = str + strlen(str) - 1;

    printf("Reverse of the string: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}

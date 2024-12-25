
#include <stdio.h>

int main() {
    char arr[6] = "Hello";
    int i;

    printf("Contents of the array:\n");
    for (i = 0; arr[i] != '\0'; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}

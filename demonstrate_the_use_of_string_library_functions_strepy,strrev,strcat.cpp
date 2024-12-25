#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World";
    char str3[100];

    // strlen()
    printf("Length of str1: %d\n", strlen(str1));

    // strcpy()
    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);

    // strrev()
    strrev(str1);
    printf("Reverse of str1: %s\n", str1);

    // strcat()
    strcat(str1, str2);
    printf("Concatenated str1 and str2: %s\n", str1);

    // strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    return 0;
}

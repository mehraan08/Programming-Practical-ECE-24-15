
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    length = strlen(str) - 1; // -1 to exclude the newline character

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

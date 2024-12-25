
#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    printf("Reverse order of digits: ");
    while (num > 0) {
        digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }
    printf("\n");

    return 0;
}

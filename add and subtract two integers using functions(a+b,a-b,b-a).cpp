#include <stdio.h>

void add(int a, int b) {
    printf("Sum: %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Difference (a-b): %d\n", a - b);
    printf("Difference (b-a): %d\n", b - a);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);
    subtract(num1, num2);

    return 0;
}

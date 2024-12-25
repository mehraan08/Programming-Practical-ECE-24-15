
#include <stdio.h>
#include <math.h>

int main() {
    double num, square_root, power;

    printf("Enter a number: ");
    scanf("%lf", &num);

    square_root = sqrt(num);
    power = pow(num, 2);

    printf("Square root of %.2lf is: %.2lf\n", num, square_root);
    printf("%.2lf raised to the power 2 is: %.2lf\n", num, power);
    return 0;
}

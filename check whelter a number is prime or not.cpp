#include <stdio.h>
#include <math.h>

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", (int)pow(2, i));
    }
    printf("\n");

    return 0;
}

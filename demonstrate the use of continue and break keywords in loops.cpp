
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // skip the current iteration
        }
        if (i == 8) {
            break; // exit the loop
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

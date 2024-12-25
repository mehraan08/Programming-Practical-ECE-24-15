
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Contents of the array in reverse order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

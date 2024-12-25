#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Contents of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}

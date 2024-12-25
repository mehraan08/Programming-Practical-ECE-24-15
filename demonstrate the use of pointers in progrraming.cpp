#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", ptr);

    *ptr = 20; // Modifying value through pointer

    printf("\nValue of num after modification: %d\n", num);

    return 0;
}

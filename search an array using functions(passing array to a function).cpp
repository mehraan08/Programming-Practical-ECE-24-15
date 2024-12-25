#include <stdio.h>

int search(int arr[], int n, int element) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[100], n, i, element, index;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    index = search(arr, n, element);

    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}

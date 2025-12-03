#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    // Ask user for size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Allocate memory using calloc (initializes to zero)
    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("calloc failed!\n");
        return 1;
    }

    // Display default values (should be 0)
    printf("\nArray initialized using calloc (all zeros):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Modify values
    printf("\n\nModifying values...\n");
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Display modified values
    printf("Array after modification:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free calloc memory
    free(arr);

    // Reuse same pointer for malloc
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("\nmalloc failed!\n");
        return 1;
    }

    // Fill malloc array with new values
    printf("\n\nNew array allocated using malloc:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }

    // Free malloc memory
    free(arr);

    return 0;
}


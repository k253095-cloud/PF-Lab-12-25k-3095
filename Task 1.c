#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    // Ask user for size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory
    arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation failed
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("\nArray elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}


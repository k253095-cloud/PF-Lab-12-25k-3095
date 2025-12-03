#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int size;

    // Ask user for max size of the string
    printf("Enter maximum size of the string: ");
    scanf("%d", &size);
    getchar();  // clear newline from input buffer

    // Allocate memory for the string
    str = (char *)malloc((size + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input string (with spaces)
    printf("Enter a line of text: ");
    fgets(str, size + 1, stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Print string in reverse
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    // Free memory
    free(str);

    return 0;
}


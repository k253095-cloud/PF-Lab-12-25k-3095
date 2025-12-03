#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *result;

    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove newline

    // Allocate memory for concatenated string
    result = (char *)malloc(strlen(str1) + strlen(str2) + 1); // +1 for '\0'

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Concatenate strings
    strcpy(result, str1);
    strcat(result, str2);

    // Display result
    printf("\nConcatenated string: %s\n", result);

    // Free memory
    free(result);

    return 0;
}


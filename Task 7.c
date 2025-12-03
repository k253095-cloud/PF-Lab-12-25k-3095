#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Recursive function to check palindrome
int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;  // Base case: crossed indices, palindrome

    // Compare characters ignoring case
    if (tolower(str[start]) != tolower(str[end]))
        return 0;  // Not a palindrome

    // Recur for remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}


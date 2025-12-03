#include <stdio.h>

// Function to find sum of digits recursively
int digitalRoot(int n) {
    if (n < 10)
        return n;  // Base case: already a single digit

    int sum = 0;

    // Sum the digits
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    // Recursively find digital root of the sum
    return digitalRoot(sum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digital Root: %d\n", digitalRoot(num));

    return 0;
}


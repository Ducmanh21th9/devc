#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find the last digit
    lastDigit = n % 10;

    // Find the first digit
    while (n >= 10) {
        n /= 10;
    }
    firstDigit = n;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}

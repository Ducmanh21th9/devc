#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isBeautifulNumber(int n) {
    if (!isPrime(n)) return false;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (!isPrime(digit)) return false;
        sum += digit;
        n /= 10;
    }
    return isPrime(sum);
}

int main() {
    int start = 23, end = 199;
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isBeautifulNumber(i)) {
            count++;
        }
    }

    printf("So luong so thuan nguyen to trong doan [%d, %d] la: %d\n", start, end, count);
    return 0;
}


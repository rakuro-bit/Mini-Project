#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input number
    scanf("%d", &n);

    // Special cases
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check prime
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Print prime result
    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    // Check even/odd
    if (n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}
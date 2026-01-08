#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    // Input two numbers
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Finding GCD using Euclidean Algorithm
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    // Finding LCM using formula
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
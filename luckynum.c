#include <stdio.h>

int main() {
    int num;

    // Input the lucky number
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    // Check divisible by 5
    if (num % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Not Divisible by 5\n");

    return 0;
}
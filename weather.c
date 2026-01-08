#include <stdio.h>

int main() {
    int n, i;
    int num;
    int positive = 0, negative = 0, zero = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}
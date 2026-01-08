#include <stdio.h>

int main() {
    int n, i;

    // Input number of days
    scanf("%d", &n);

    int arr[n];

    // Input exercise times
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print in reverse order
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
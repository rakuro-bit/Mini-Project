#include <stdio.h>

int main() {
    int n, i;
    int total = 0;
    float average;

    // Input number of students
    scanf("%d", &n);

    // Loop to take student marks
    for (i = 0; i < n; i++) {
        int mark;
        scanf("%d", &mark);
        total += mark;
    }

    // Calculate average
    average = (float) total / n;

    // Output results
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
#include <stdio.h>

int main() {
    int n, i;
    int mark;

    // Input number of subjects
    scanf("%d", &n);

    int highest, lowest;

    // Read the first mark separately
    scanf("%d", &mark);
    highest = lowest = mark;

    // Read remaining marks
    for (i = 1; i < n; i++) {
        scanf("%d", &mark);

        if (mark > highest)
            highest = mark;

        if (mark < lowest)
            lowest = mark;
    }

    // Output results
    printf("Highest = %d\n", highest);
    printf("Lowest = %d\n", lowest);

    return 0;
}
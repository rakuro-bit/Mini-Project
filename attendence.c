#include <stdio.h>

int main() {
    int n, i;
    int value;
    int present = 0, absent = 0;

    // Input total number of students
    scanf("%d", &n);

    // Read attendance data
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (value == 1)
            present++;
        else if (value == 0)
            absent++;
    }

    // Output results
    printf("Present: %d\n", present);
    printf("Absent: %d\n", absent);

    return 0;
}
#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    int studentPresent[10] = {0};   
    int dayAttendance[7] = {0};   

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            studentPresent[i] += A[i][j];
            dayAttendance[j] += A[i][j];
        }
    }
    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, studentPresent[i]);
    }
    int maxAttendance = studentPresent[0];
    int maxStudent = 1;

    for (i = 1; i < 10; i++) {
        if (studentPresent[i] > maxAttendance) {
            maxAttendance = studentPresent[i];
            maxStudent = i + 1;   
        }
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",
           maxStudent, maxAttendance);
    int minAttendance = dayAttendance[0];
    int minDay = 1;

    for (j = 1; j < 7; j++) {
        if (dayAttendance[j] < minAttendance) {
            minAttendance = dayAttendance[j];
            minDay = j + 1; 
        }
    }

    printf("\nDay with Lowest Overall Attendance: Day %d\n", minDay);

    return 0;
}
#include <stdio.h>

int main() {
    float C, F;

    // Input temperature in Celsius
    scanf("%f", &C);

    // Convert to Fahrenheit
    F = (C * 9.0 / 5.0) + 32.0;

    // Print result rounded to 2 decimal places
    printf("Temperature in Fahrenheit = %.2f\n", F);

return 0;
}
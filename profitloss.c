#include <stdio.h>

int main() {
    int n, i, value;
    int totalProfit = 0, totalLoss = 0;

    // Input number of days
    scanf("%d", &n);

    // Read daily profit/loss values
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (value > 0)
            totalProfit += value;
        else
            totalLoss += (-value);  // Convert negative to positive
    }

    // Calculate net balance
    int netBalance = totalProfit - totalLoss;

    // Output results
    printf("Total Profit: %d\n", totalProfit);
    printf("Total Loss: %d\n", totalLoss);
    printf("Net Balance: %d\n", netBalance);

    return 0;
}
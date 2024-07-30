#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int minCoinsChange(int amount, int denominations[], int num_denominations) {
    int minCoins[amount + 1];
    minCoins[0] = 0;

    for (int i = 1; i <= amount; ++i) {
        minCoins[i] = INT_MAX;
        for (int j = 0; j < num_denominations; ++j) {
            if (i - denominations[j] >= 0) {
                minCoins[i] = min(minCoins[i], minCoins[i - denominations[j]] + 1);
            }
        }
    }

    return minCoins[amount];
}

int main() {
    int amount = 6;
    int denominations[] = {1, 3, 4};
    int num_denominations = sizeof(denominations) / sizeof(denominations[0]);
    int minCoinsNeeded = minCoinsChange(amount, denominations, num_denominations);
    printf("Minimum number of coins needed to make change for %d cents: %d\n", amount, minCoinsNeeded);
    return 0;
}
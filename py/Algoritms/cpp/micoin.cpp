#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoinsNeeded(int n, vector<int>& denominations) {
    vector<int> minCoins(n + 1, INT_MAX);
    minCoins[0] = 0;

    for (int amount = 1; amount <= n; amount++) {
        for (int coin : denominations) {
            if (coin <= amount) {
                minCoins[amount] = min(minCoins[amount], 1 + minCoins[amount - coin]);
            }
        }
    }

    return minCoins[n];
}

int main() {
    int n;
    cout << "Enter the number of cents: ";
    cin >> n;

    vector<int> denominations = {1, 3, 4};
    int result = minCoinsNeeded(n, denominations);
    c

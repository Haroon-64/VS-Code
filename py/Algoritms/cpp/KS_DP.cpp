#include <iostream>
#include <vector>
using namespace std;

int knapsack(int capacity, vector<int>& weight, vector<int>& price, int items) {
    vector<vector<int>> dp(items + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= items; i++) {
        for (int w = 1; w <= capacity; w++) {
            if (weight[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], price[i - 1] + dp[i - 1][w - weight[i - 1]]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[items][capacity];
}

int main() {
    int items, capacity;
    cout << "Enter the number of items: ";
    cin >> items;
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    vector<int> weight(items);
    vector<int> price(items);

    cout << "Enter the weights of the items:" << endl;
    for (int i = 0; i < items; i++) {
        cout << "Enter " << i + 1 << "th weight: ";
        cin >> weight[i];
    }

    cout << "Enter the prices of the items:" << endl;
    for (int i = 0; i < items; i++) {
        cout << "Enter " << i + 1 << "th price: ";
        cin >> price[i];
    }

    cout << "Max value that can be obtained: " << knapsack(capacity, weight, price, items) << endl;

    return 0;
}

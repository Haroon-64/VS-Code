#include <iostream>
#include <vector>
using namespace std;

vector<int> weight, price;

int KS(int c, int i) {
    if (i >= weight.size() || c <= 0) return 0;

    else if (c < weight[i]) {
        return KS(c, i + 1);
    } else {
        return max(KS(c, i + 1), price[i] + KS(c - weight[i], i + 1));
    }
}

int main() {
    int items, capacity;
    cout << "Enter the number of items: ";
    cin >> items;
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    cout << "Enter the weights of the items:" << endl;
    weight.resize(items);
    for (int i = 0; i < items; i++) {
        cout << "Enter " << i + 1 << "th weight: ";
        cin >> weight[i];
    }

    cout << "Enter the prices of the items:" << endl;
    price.resize(items);
    for (int i = 0; i < items; i++) {
        cout << "Enter " << i + 1 << "th price: ";
        cin >> price[i];
    }

    cout << "Max value that can be obtained: " << KS(capacity, 0) << endl;

    return 0;
}

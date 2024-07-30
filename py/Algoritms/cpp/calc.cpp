#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minOperationsToN(int n) {
    vector<int> minOps(n + 1, INT_MAX);

    for (int i = 2; i <= n; i++) {
        minOps[i] = min(minOps[i], minOps[i - 1] + 1);
        if (i % 2 == 0) minOps[i] = min(minOps[i], minOps[i / 2] + 1);
        if (i % 3 == 0) minOps[i] = min(minOps[i], minOps[i / 3] + 1);
    }

    return minOps[n];
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = minOperationsToN(n);
    cout << "Minimum number of operations to reach " << n << ": " << result << endl;

    return 0;
}

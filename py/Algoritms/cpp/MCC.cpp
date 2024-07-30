#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int matrixChainMultiplication(vector<int>& d, int start, int end) {
    if (end == start + 1) {
        return 0;
    }

    int minCost = INT_MAX;
    for (int i = start + 1; i < end; i++) {
        int cost = matrixChainMultiplication(d, start, i) +
                   matrixChainMultiplication(d, i, end) +
                   (d[start] * d[i] * d[end]);
        minCost = min(minCost, cost);
    }
    return minCost;
}

int main() {
    vector<int> dimensions = {2, 3, 4, 5};
    int result = matrixChainMultiplication(dimensions, 0, dimensions.size

#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int matrixChainMultiplication(vector<int>& d, int start, int end, unordered_map<pair<int, int>, int>& memo) {
    if (end == start + 1) {
        return 0;
    }

    if (memo.find({start, end}) != memo.end()) {
        return memo[{start, end}];
    }

    int minCost = INT_MAX;
    for (int i = start + 1; i < end; i++) {
        int cost = matrixChainMultiplication(d, start, i, memo) +
                   matrixChainMultiplication(d, i, end, memo) +
                   (d[start] * d[i] * d[end]);
        minCost = min(minCost, cost);
    }

    memo[{start, end}] = minCost;
    return minCost;
}

int main() {
    vector<int> dimensions = {2, 3, 4, 5};
    unordered_map<pair<int, int>, int> memo;
    int result = matrixChainMultiplication(dimensions, 0, dimensions.size() - 1, memo);
    cout << "Minimum cost of matrix chain multiplication: " << result << endl;
    return 0;
}

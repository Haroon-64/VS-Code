#include <iostream>
#include <string>
using namespace std;

int lcs(const string& A, const string& B, int i, int j) {
    if (i == A.size() || j == B.size()) {
        return 0;
    } else if (A[i] == B[j]) {
        return 1 + lcs(A, B, i + 1, j + 1);
    } else {
        return max(lcs(A, B, i + 1, j), lcs(A, B, i, j + 1));
    }
}

int main() {
    string A, B;
    cout << "Enter string 1: ";
    cin >> A;
    cout << "Enter string 2: ";
    cin >> B;

    int result = lcs(A, B, 0, 0);
    cout << "Length of Longest Common Subsequence: " << result << endl;

    return 0;
}

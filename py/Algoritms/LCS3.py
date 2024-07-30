def longest_common_subsequence_length(seq1, seq2, seq3) -> int:
    """ Compute the length of the longest common subsequence of three sequence"""
    
    m, n, p = len(seq1), len(seq2), len(seq3)
    
    dp = [[[0] * (p + 1) for _ in range(n + 1)] for _ in range(m + 1)]
    
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            for k in range(1, p + 1):
                if seq1[i - 1] == seq2[j - 1] == seq3[k - 1]:
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1
                else:
                    dp[i][j][k] = max(dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1])
    
    return dp[m][n][p]

seq1 = input("Enter the first sequence: ")
seq2 = input("Enter the second sequence: ")
seq3 = input("Enter the third sequence: ")
length = longest_common_subsequence_length(seq1, seq2, seq3)
print(f"The length of the longest common subsequence is {length}.")

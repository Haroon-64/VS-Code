def edit_distance(str1: str, str2: str) -> int: 
    """ The edit distance between two strings is the minimum number of operations 
    (insertions, deletions, and substitutions of symbols) to transform one string into another. It is a 
    measure of the similarity of two strings. Edit distance has applications, for example, in 
    computational biology, natural language processing, and spell-checking. Your goal in this 
    problem is to compute the edit distance between two strings"""
    
    m = len(str1)
    n = len(str2)

    dp = [[0] * (n + 1) for _ in range(m + 1)]

    for i in range(m + 1):
        dp[i][0] = i
    for j in range(n + 1):
        dp[0][j] = j

    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if str1[i - 1] == str2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1]
            else:
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1])

    return dp[m][n]

str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")
distance = edit_distance(str1, str2)
print(f"The edit distance between '{str1}' and '{str2}' is {distance}.")

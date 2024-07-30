def subset_sum_exists(nums, target_sum):
    """ There is a subset A of n positive integers and a value sum. Find whether or not 
    there exists any subset of the given set, the sum of whose elements is equal to the give n value 
    of sum."""
    
    n = len(nums)
    dp = [[False] * (target_sum + 1) for _ in range(n + 1)]

    for i in range(n + 1):
        dp[i][0] = True

    for i in range(1, n + 1):
        for j in range(1, target_sum + 1):
            if nums[i - 1] > j:
                dp[i][j] = dp[i - 1][j]
            else:
                dp[i][j] = dp[i - 1][j] or dp[i - 1][j - nums[i - 1]]

    return dp[n][target_sum]

nums = [3, 34, 4, 12, 5, 2]
target_sum = 9
exists = subset_sum_exists(nums, target_sum)

if exists:
    print(f"There exists a subset with sum {target_sum}.")
else:
    print(f"No subset found with sum {target_sum}.")

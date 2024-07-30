def max_points(nums):
    """
    Given a sequence consisting of n integers. The player can make several steps. In a single step, 
    he can choose an element of the sequence (let’s denote it a[k]) and delete it; at that, all elements 
    equal to a[k] + 1 and a[k] - 1 also must be deleted from the sequence. That step brings a[k] 
    points to the player.
    Peter is a perfectionist, so he decided to get as many points as possible. Help him."""
    
    max_num = max(nums)
    points = [0] * (max_num + 1)
    dp = [0] * (max_num + 1)

    for num in nums:
        points[num] += num

    dp[0] = points[0]
    dp[1] = max(points[0], points[1])

    for i in range(2, max_num + 1):
        dp[i] = max(dp[i - 1], dp[i - 2] + points[i])

    return dp[max_num]

sequence = [3, 2, 2, 3, 1, 2]
max_score = max_points(sequence)
print(f"The maximum points Peter can score is {max_score}.")

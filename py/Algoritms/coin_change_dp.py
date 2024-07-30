def min_coins_needed(n: int, denominations: list) -> int:
    """Problem 2: A natural greedy strategy for the change problem does not work correctly for any 
    set of denominations. For example, if the available denominations are 1, 3, and 4, the greedy 
    algorithm will change 6 cents using three coins (4 + 1 + 1) while it can be changed using just 
    two coins (3 + 3). Your goal now is to apply dynamic programming to solve the Money Change 
    Problem for denominations 1, 3, and 4."""
    
    
    min_coins = [float('inf')] * (n + 1)
    min_coins[0] = 0  

    for amount in range(1, n + 1):
        for coin in denominations:
            if coin <= amount:
                min_coins[amount] = min(min_coins[amount], 1 + min_coins[amount - coin])


    return min_coins[n]



n = int(input("Enter the number of cents: "))
denominations = [1, 3, 4]
result = min_coins_needed(n, denominations)
print(f"Minimum number of coins needed to make {n} cents: {result}")

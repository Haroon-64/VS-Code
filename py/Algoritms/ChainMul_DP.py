def MC(d: list, start: int, end: int, memo=None):
    if memo is None:
        memo = {}
        
    if end == start + 1:
        return 0
    
    if (start, end) in memo:
        return memo[(start, end)]
    
    min_cost = float('inf')
    for i in range(start + 1, end):
        cost = MC(d, start, i, memo) + MC(d, i, end, memo) + (d[start] * d[i] * d[end])
        min_cost = min(min_cost, cost)
    
    memo[(start, end)] = min_cost
    return min_cost

dimensions = [2, 3, 4, 5]
print(MC(dimensions, 0, len(dimensions) - 1))

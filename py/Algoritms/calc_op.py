def min_operations_to_n(n: int) -> int:
    """
    You are given a primitive calculator that can perform the following three 
    operations with the current number 𝑥: multiply 𝑥 by 2, multiply 𝑥 by 3, or add 1 to 𝑥. Your 
    goal is given a positive integer 𝑛, find the minimum number of operations needed to obtain the 
    number 𝑛 starting from the number 1.
    """
    min_ops = [0] * (n + 1)

    for i in range(2, n + 1):
        # Initialize min_ops[i] with a large value initially
        min_ops[i] = float('inf')

        if i % 2 == 0:
            min_ops[i] = min(min_ops[i], min_ops[i // 2] + 1)
        if i % 3 == 0:
            min_ops[i] = min(min_ops[i], min_ops[i // 3] + 1)

        min_ops[i] = min(min_ops[i], min_ops[i - 1] + 1)

    return min_ops[n]

n = int(input("Enter a number: "))
result = min_operations_to_n(n)
print(f"Minimum number of operations to reach {n}: {result}")

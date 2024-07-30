def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def is_t_prime(n):
    """ We know that prime numbers are positive integers that have exactly two distinct 
    positive divisors. Similarly, we’ll call a positive integer t Т-prime, if t has exactly three distinct 
    positive divisors. You are given an array of n positive integers. For each of them determine 
    whether it is Т-prime or not."""
    
    sqrt_n = int(n**0.5)
    if sqrt_n * sqrt_n != n:
        return False
    if is_prime(sqrt_n):
        return True
    else:
        return False


numbers = [4, 9, 12, 16, 25]
for num in numbers:
    if is_t_prime(num):
        print(f"{num} is T-prime.")
    else:
        print(f"{num} is not T-prime.")

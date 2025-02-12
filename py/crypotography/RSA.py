import random

def is_prime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def key():
    p, q = 4, 4
    while not is_prime(p):
        p = random.randint(100, 1000)
    while not is_prime(q) or q == p: 
        q = random.randint(100, 1000)

    n = p * q
    phi = (p - 1) * (q - 1)

    e = 3
    while phi % e == 0:  
        e += 2

    d = pow(e, -1, phi)  

    return (n, e, d)

def encrypt(message, n, e):
    encrypted_message = []
    for char in message:
        char_code = ord(char)  
        encrypted_char = pow(char_code, e, n)  
        encrypted_message.append(encrypted_char)
    return encrypted_message

def decrypt(encrypted_message, n, d):
    decrypted_message = []
    for encrypted_char in encrypted_message:
        char_code = pow(encrypted_char, d, n)  
        decrypted_message.append(chr(char_code))  
    return ''.join(decrypted_message) 


msg = input("Enter the message: ")
n, e, d = key()

encrypted = encrypt(msg, n, e)
print("Public key:", (n, e))
print("Private key:", d)
print("Encrypted message:", encrypted)

decrypted = decrypt(encrypted, n, d)
print("Decrypted message:", decrypted)

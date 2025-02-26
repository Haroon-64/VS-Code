# Convert character to number (A=0, ..., Z=25) and vice versa
def char_to_num(c):
    return ord(c.upper()) - ord('A')

def num_to_char(n):
    return chr(n + ord('A'))

# Convert a string into a vector of numbers
def text_to_vector(text, size):
    vec = [char_to_num(c) for c in text]
    while len(vec) % size != 0:  # Padding with 'X' if not a multiple of size
        vec.append(char_to_num('X'))
    return vec

# Convert a key string into a square matrix
def text_to_matrix(key, size):
    key_numbers = [char_to_num(c) for c in key]
    matrix = []
    for i in range(size):
        matrix.append(key_numbers[i * size : (i + 1) * size])
    return matrix

# Multiply matrix and vector, mod 26
def multiply_matrix_vector(matrix, vector):
    size = len(matrix)
    result = [0] * size
    for i in range(size):
        for j in range(size):
            result[i] += matrix[i][j] * vector[j]
        result[i] %= 26
    return result

# Find determinant mod 26 (for matrix inversion)
def determinant(matrix):
    return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) % 26

# Find modular inverse of determinant mod 26
def mod_inverse(n, mod=26):
    for i in range(1, mod):
        if (n * i) % mod == 1:
            return i
    return None  # No modular inverse exists

# Find inverse matrix mod 26 (for 2x2 case)
def inverse_matrix(matrix):
    det = determinant(matrix)
    det_inv = mod_inverse(det)
    if det_inv is None:
        raise ValueError("Matrix is not invertible mod 26")
    
    # Compute adjugate matrix
    inv_matrix = [
        [matrix[1][1] * det_inv % 26, -matrix[0][1] * det_inv % 26],
        [-matrix[1][0] * det_inv % 26, matrix[0][0] * det_inv % 26]
    ]
    
    # Convert negatives to positive mod 26
    for i in range(2):
        for j in range(2):
            inv_matrix[i][j] = (inv_matrix[i][j] + 26) % 26
    
    return inv_matrix

# Encrypt function
def hill_encrypt(plaintext, key):
    size = int(len(key) ** 0.5)  # Key should be a square matrix
    key_matrix = text_to_matrix(key, size)
    
    plaintext = plaintext.replace(" ", "").upper()
    text_vector = text_to_vector(plaintext, size)
    
    encrypted_text = ""
    for i in range(0, len(text_vector), size):
        block = text_vector[i : i + size]
        encrypted_block = multiply_matrix_vector(key_matrix, block)
        encrypted_text += "".join(num_to_char(n) for n in encrypted_block)
    
    return encrypted_text

# Decrypt function
def hill_decrypt(ciphertext, key):
    size = int(len(key) ** 0.5)
    key_matrix = text_to_matrix(key, size)
    inv_key_matrix = inverse_matrix(key_matrix)
    
    ciphertext = ciphertext.replace(" ", "").upper()
    text_vector = text_to_vector(ciphertext, size)
    
    decrypted_text = ""
    for i in range(0, len(text_vector), size):
        block = text_vector[i : i + size]
        decrypted_block = multiply_matrix_vector(inv_key_matrix, block)
        decrypted_text += "".join(num_to_char(n) for n in decrypted_block)
    
    return decrypted_text

# Example Usage
key = "DFCH"
plaintext = "ACT"
ciphertext = hill_encrypt(plaintext, key)
print("Encrypted:", ciphertext)

decrypted = hill_decrypt(ciphertext, key)
print("Decrypted:", decrypted)

def generate_key(msg, key):
    key = (key * (len(msg) // len(key) + 1))[:len(msg)]
    
    table = [[chr((i + j) % 26 + 65) for j in range(26)] for i in range(26)]
    
    return table, key.upper()

def encrypt(msg, key):
    table, key = generate_key(msg, key)
    
    cipher_text = []
    for m, k in zip(msg.upper(), key):
        row = ord(m) - 65
        col = ord(k) - 65
        cipher_text.append(table[row][col])

    return ''.join(cipher_text)

def decrypt(msg, key):
    table, key = generate_key(msg, key)
    
    decoded_text = []
    for m, k in zip(msg.upper(), key):
        row = ord(k) - 65  
        col = table[row].index(m)  
        decoded_text.append(chr(col + 65)) 

    return ''.join(decoded_text)


plaintext = input("Enter plaintext: ").upper()
plaintext = ''.join(filter(str.isalpha, plaintext)).replace('J', 'I')
keyword = input("Enter keyword: ").upper()

ciphertext = encrypt(plaintext, keyword)
print("Ciphertext:", ciphertext)

decrypted_text = decrypt(ciphertext, keyword)
print("Decrypted text:", decrypted_text.lower())

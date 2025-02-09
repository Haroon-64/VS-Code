def generate_key(msg, key):
    key = (key * (len(msg) // len(key) + 1))[:len(msg)]
    
    table = [[chr((i + j) % 26 + 65) for j in range(26)] for i in range(26)]
    
    return table, key.upper()

def encrypt(msg, key):
    table, key = generate_key(msg, key)
    
    return ''.join(table[ord(m) - 65][ord(k) - 65] for m, k in zip(msg.upper(), key))

def decrypt(msg, key):
    table, key = generate_key(msg, key)
    
    return ''.join(chr(table[ord(k) - 65].index(m) + 65) for m, k in zip(msg.upper(), key))

plaintext = input("Enter plaintext: ").upper()
plaintext = ''.join(filter(str.isalpha, plaintext)).replace('J', 'I')
keyword = input("Enter keyword: ").upper()

ciphertext = encrypt(plaintext, keyword)
print("Ciphertext:", ciphertext)

decrypted_text = decrypt(ciphertext, keyword)
print("Decrypted text:", decrypted_text)

def encrypt(plaintext:str,key:int):
    ciphertext = ""
    for i in range(len(plaintext)):
        if plaintext[i] == " ":
            ciphertext += " "
        else:    
            ciphertext += (chr((ord(plaintext[i]) - 97 + key)%26 + 97))  # 65 if capital
    return ciphertext

def decrypt(ciphertext:str,key:int):
    plaintext = ""
    for i in range(len(ciphertext)):
        if ciphertext[i] == " ":
            plaintext += " "
        else:    
            plaintext += (chr((ord(ciphertext[i]) - 97 - key)%26 + 97))  # 65 if capital
    return plaintext


plaintext = input("enter text\n")
key = int(input("enter key"))
plaintext = plaintext.lower()


print(f"encrypted= {encrypt(plaintext,key)}")

print(f"decrypted= {decrypt(encrypt(plaintext,key),key)}")

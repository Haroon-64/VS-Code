plaintext = input("enter text\n")
plaintext = plaintext.lower()

ciphertext = ""
for i in range(len(plaintext)):
    if plaintext[i] == " ":
        ciphertext += " "
    else:    
        ciphertext += (chr((ord(plaintext[i]) + 3)%26 + 97))  # 65 if capital


print(ciphertext)
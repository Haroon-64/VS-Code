def generatekey(key):
    fullkey = key
    while len(fullkey) < len(msg):
        fullkey += key
    fullkey = fullkey[:len(msg)]
    
    table = []
    for i in range(26):
        table.append([])
        for j in range(26):
            table[i].append(chr((i+j)%26+65))

    return table,fullkey

def encrypt(msg,key):
    table, fullkey = generatekey(key)

    cipher = ""
    for i in range(len(msg)):
        cipher += table[ord(msg[i])-65][ord(fullkey[i])-65]
    return cipher

def decrypt(msg,key):
        
        table = generatekey(key)
    
        cipher = ""
        for i in range(len(msg)):
            for j in range(26):
                if table[ord(fullkey[i])-65][j] == msg[i]:
                    cipher += chr(j+65)
        return cipher


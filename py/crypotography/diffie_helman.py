def keygen(g,p,R):
    """g^R mod p"""
    return g**R % p


P = 23
G = 5


# key of a
a = int(input("Enter the key of a: "))
R1 = keygen(G,P,a)
print("A:",R1)

# key of b
b = int(input("Enter the key of b: "))
R2 = keygen(G,P,b)
print("B:",R2)

# Part 2
K1 = keygen(R2,P,a)
print("K1:",K1)

K2 = keygen(R1,P,b)
print("K2:",K2)



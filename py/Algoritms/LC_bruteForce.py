def LCS(i:int,j:int):
    global A,B
    if i==len(A) or j==len(B): return 0
    elif A[i]==B[j]: 
        return 1 + LCS((i+1),(j+1))
    else:
        return max(LCS((i+1),(j)),LCS((i),(j+1)))
        
        
        
A = input("enter string 1")
B = input("enter string 2")

print(LCS(0,0))
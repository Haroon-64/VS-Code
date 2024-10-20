
def BruteF(s, p) -> None:
    def dfs(i,j) -> bool | None:
        if i>= len(s) or j>=len(p): return True
        if j>=len(p): return False
        
        match = i<len(s) and (s[i] == p[j] or p[j] == ".")
        if(j+1)<len(p) and p[j+1] == "*":
            return dfs(i,j+2) or (match and dfs(i+1,j))
        if match:
            return dfs(i+1,j+1)
        return False
    return dfs(0,0)

def mem(s,p) -> bool | None:
    cache = {}
    def dfs(i,j) -> bool | None:
        if (i,j) in cache: return cache[(i,j)]
        if i>= len(s) or j>=len(p): return True
        if j>=len(p): return False
        
        match = i<len(s) and (s[i] == p[j] or p[j] == ".")
        if(j+1)<len(p) and p[j+1] == "*":
            cache[(i,j)] = dfs(i,j+2) or (match and dfs(i+1,j))
            return cache[(i,j)]
        if match:
            cache[(i,j)] = dfs(i+1,j+1)
            return cache[(i,j)]
        cache[(i,j)] = False
        return False
    return dfs(0,0)


def DP(s: str, p: str) -> bool:
        # Initialize a 2D array `memory` with dimensions (len(s) + 1) x (len(p) + 1)
        memory = [[False] * (len(p) + 1) for i in range(len(s) + 1)]
        # Set memory[len(s)][len(p)] to True since an empty substring of s and an empty pattern p match
        memory[len(s)][len(p)] = True

       # Iterate through the substrings of s and patterns p from the end towards the beginning
        for i in range(len(s), -1, -1):
            for j in range(len(p) - 1, -1, -1):
                # Check if the current characters match or if the pattern character is '.'
                match = i < len(s) and (s[i] == p[j] or p[j] == ".")

                if (j + 1) < len(p) and p[j + 1] == "*":
                    # If the next character in the pattern is '*', handle the '*' wildcard character
                    memory[i][j] = memory[i][j + 2]
                    if match:
                        memory[i][j] = memory[i + 1][j] or memory[i][j]
                elif match:
                    # If the characters match, move to the next characters in both strings
                    memory[i][j] = memory[i + 1][j + 1]

        # Return memory[0][0], which represents whether the entire s matches the entire p
        return memory[0][0]
    


          
s = input("enter string")
p = input("enter pattern")


# print(DP()(s,p))
print(mem(s,p))
# print(BruteF(s,p))
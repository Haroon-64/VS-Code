def countPal(s, l, r):
    res = 0
    while l>=0 and r < len(s) and s[l] == s[r]:
        res+=1
        l -= 1
        r += 1
    return res
def countSubstr(s: str)-> int:
    res = 0
    for i in range(len(s)):
        l = r = i
        res += countPal(s,i,i)
        res += countPal(s,i,i+1)
    return res


c =  input("enter string")
print(countSubstr(c))
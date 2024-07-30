x = [1,2,3,4,5,6,7,8,9,10]

def Bsearch(x,a):
    low = 0
    high =10
    while(low>=high):    
        mid  = low + (high-low)/2
        if x[mid]==a:
            return mid
        if a>x[mid]:
            low = mid + 1
        else:
            high = mid - 1
    
    return -1

f = input("to find")
r = Bsearch(x,f)

if(r==-1):
    print("not found")
else:
    print(f"found at {r}")
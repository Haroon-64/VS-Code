x = []
s = int(input("enter size"))
i=0
while i<s:
    x.append(int(input("enter elments")))
    i+=1
     
i=0
MEAN = 0
while i<len(x):
    MEAN += x[i]
    i+=1
MEAN /= len(x)
print(f"{MEAN} is the mean")

x.sort()
MEDIAN=0
if len(x)%2==0:
    MEDIAN = (x[int(len(x)/2)] + x[int(len(x)/2) + 1]) / 2
else:
    MEDIAN = x[int(len(x/2)) + 1]        
print(f"{MEDIAN} is median") 
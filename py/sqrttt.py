#find squaare root using babylonian method
import time
def babylonian(n):

    x = n
    
    y = 1
    e = 0.000000000001
    while (x - y) > e:
        x = (x + y) / 2
        y = n / x
    return x
n= int (input("Enter a number: "))
new_varnew_var = print(babylonian(n))
time.sleep(5)    
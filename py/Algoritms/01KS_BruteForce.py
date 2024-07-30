def KS(c,i):
    if i >= items or c <= 0: return 0         # check for end of items or capacity exceeded
    
    elif c<weight[i]:
        return KS(c,i+1)                      # check for remaining capacity for current item
    else:
        return max(KS(c,i+1), price[i] + KS(c-weight[i],i+1))    # return max from skipping or picking item

items = int(input("Enter the number of items: "))
capacity = int(input("Enter the capacity of the knapsack: "))
weight = []
price = []

print("Enter the weights of the items:")
for i in range(items):
    weight.append(int(input(f"enter {i+1}th weight")))

print(weight)

print("Enter the prices of the items:")
for i in range(items):
    price.append(int(input(f"enetr {i+1}th price")))
    
print(price)    


print(KS(capacity,0))
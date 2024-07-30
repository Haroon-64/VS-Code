def KS(c, i, items, weight,price):
    global Table
    if i >= items or c <= 0:
        return 0

    if Table[c][i + 1] is None:
        Table[c][i + 1] = KS(c, i + 1, items, weight,price)

    if weight[i] > c:
        return Table[c][i + 1]

    if Table[c - weight[i]][i + 1] is None:
        Table[c - weight[i]][i + 1] = KS(c - weight[i], i + 1, items, weight,price)

    return max(Table[c][i + 1], price[i] + Table[c - weight[i]][i + 1])    # return max from skipping or picking item


num_item = int(input("Enter the number of num_item: "))
capacity = int(input("Enter the capacity of the knapsack: "))
Table = [[None for _ in range(num_item + 1)] for _ in range(capacity + 1)]
print(Table)
wt = []
price = []

print("Enter the wts of the num_item:")
for i in range(num_item):
    wt.append(int(input(f"enter wt of {i+1} ")))

print(wt)

print("Enter the prices of the num_item:")
for i in range(num_item):
    price.append(int(input(f"enetr price of {i+1} ")))
        
print(price)  


print(KS(capacity,0,num_item,wt,price))
    

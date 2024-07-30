x = [[1,2,3],[4,5,6],[7,8,9]]
l = len(x)



def transpose(x,l):
    y=[[0,0,0],[0,0,0],[0,0,0]]
    for i in range(l):
        for j in range(l):
            y[j][i] = x[i][j]
    return y


print(transpose(x,l))
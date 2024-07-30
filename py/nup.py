import numpy as np  #as np is used to give alias to numpy
import numpy



a= np.array([[1,2,3,4],[5,6,7,8]])
print(a)

print(a.shape)     #  size of array

print(a.ndim)       #  dimension of array
print(a.size)    #  total number of elements in array
#since the library is written in c language, it is faster than python and the data members are static in nature
print(a.dtype)
b= numpy.array([[1,2,3,4],[5,6,7,8],[9,10,11,"12"]])
print(b.dtype )    #  all the elements are converted to string
print(type(b[0][0]))

#typecasting
c= numpy.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]],dtype= numpy.float64)
d= numpy.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]],dtype= "U2")  #  U2 means unicode of 2 bytes
#default values
l=np.full((3,3),5)   # 3*3 matrix with all elements as 5
m=np.zeros((3,3))   # 3*3 matrix with all elements as 0
n=np.ones((3,3))   # 3*3 matrix with all elements as 1
o=np.eye(3)   # 3*3 identity matrix
ll=np.empty((3,3))   # 3*3 matrix with all elements as garbage values   allocate memory but not initialize

np.arange(1,10,2)   # 1 to 10 with step size 2
np.linspace(1,10,5)   # 1 to 10 with 5 elements
#2d array
np.arange(1,10,2).reshape(1,5)   # 1 to 10 with step size 2

#nan and inf
print(np.nan) 
print(np.inf)
print(np.isinf(a[0][0]))
#np supports mathematical operations
print(a+1)
print(a-1)
print(a*2)
print(a/2)
print(a**2)
#whereas
l=[1,2,3,4]  
print(l+l)    #  concatenation
print(l*2)    #  repetition
np.sqrt(a)
np.exp(a)


#libraies like numpy on operation dont change the original array
#they create a new array and return it    
#to change the original array we use
a= np.sqrt(a)
print(a)
a=np.insert(a,1,5)   #  insert 5 at index 1
print(a.reshape(3,3))  #  reshape to 3*3
a=np.delete(a,1)   #  delete element at index 1


a.resize(3,3)   #  resize to 3*3  (it changes the original array)
print(a.transpose())   #  transpose of matrix
print(a.T)   #  transpose of matrix
print(a.flatten())   #  convert to 1d array
print(a.ravel())   #  convert to 1d array (it changes the original array)
print(a.sum())   #  sum of all elements
print(a.sum(axis=0))   #  sum of all columns
print(a.sum(axis=1))   #  sum of all rows
print(a.min())   #  minimum element
print(a.max())   #  maximum element
print(a.mean())   #  mean of all elements
print(a.mean(axis=0))   #  mean of all columns
print(a.mean(axis=1))   #  mean of all rows
print(a.std())   #  standard deviation of all elements
print(a.std(axis=0))   #  standard deviation of all columns
print(a.std(axis=1))   #  standard deviation of all rows
print(a.var())   #  variance of all elements
print(a.var(axis=0))   #  variance of all columns
print(a.var(axis=1))   #  variance of all rows
print(a.cumsum())   #  cumulative sum of all elements
print(a.cumsum(axis=0))   #  cumulative sum of all columns
print(a.cumsum(axis=1))   #  cumulative sum of all rows
print(a.cumprod())   #  cumulative product of all elements
print(a.cumprod(axis=0))   #  cumulative product of all columns
print(a.cumprod(axis=1))   #  cumulative product of all rows
print(a.argmax())   #  index of maximum element
print(a.argmin())   #  index of minimum element
print(a.argsort())   #  indices of elements in sorted order
print(a.sort())   #  sort the array
print(a.clip(2,5))   #  clip the array between 2 and 5
print(a.diagonal())   #  diagonal elements
print(a.trace())   #  sum of diagonal elements
print(a.trace(offset=1))   #  sum of diagonal elements with offset 1

#concatenation
a=np.array([[1,2,3],[4,5,6]])
b=np.array([[7,8,9],[10,11,12]])
print(np.concatenate((a,b),axis=0))   #  concatenate along rows
print(np.concatenate((a,b),axis=1))   #  concatenate along columns
print(np.vstack((a,b)))   #  concatenate along rows
print(np.hstack((a,b)))   #  concatenate along columns
print(np.r_[a,b])   #  concatenate along rows
print(np.c_[a,b])   #  concatenate along columns
print(np.column_stack((a,b)))   #  concatenate along columns
print(np.row_stack((a,b)))   #  concatenate along rows
print(np.dstack((a,b)))   #  concatenate along depth
print(np.hstack((a,b)))   #  concatenate along columns


print(np.split(a,2,axis=0))   #  split along rows

#ranodm numbers
print(np.random.rand(3,3))   #  3*3 matrix with random numbers between 0 and 1
print(np.random.randn(3,3))   #  3*3 matrix with random numbers between -1 and 1
print(np.random.randint(1,10,3))   #  3 random numbers between 1 and 10
print(np.random.choice([1,2,3,4,5],3))   #  3 random numbers from the list
print(np.random.choice([1,2,3,4,5],3,p=[0.1,0.2,0.3,0.2,0.2]))   #  3 random numbers from the list with probability
print(np.random.permutation([1,2,3,4,5]))   #  random permutation of the list
print(np.random.shuffle([1,2,3,4,5]))   #  random shuffle of the list
print(np.random.randint(10 ,size=(3,3)))   #  3*3 matrix with random numbers between 0 and 10

#saving and loading
np.save('a.npy',a)   #  save array a to a.npy
np.load('a.npy')   #  load array from a.npy
np.savetxt('a.txt',a)   #  save array a to a.txt
np.loadtxt('a.txt')   #  load array from a.txt
np.savez('a.npz',a=a,b=b)   #  save array a and b to a.npz
np.load('a.npz')   #  load array from a.npz
np.savez_compressed('a.npz',a=a,b=b)   #  save array a and b to a.npz in compressed format

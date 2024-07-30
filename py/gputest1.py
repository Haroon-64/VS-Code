import cupy as cp
import numpy as np
#caluclate the time taken by the code
import time
start = time.time()

#code to be tested


a = cp.array([a for a in range(100000000)])
print(a)
end = time.time()
print(end - start)       #result = 10.9503


start2= time.time()
b= np.array([a for a in range(100000000)])
print(b)
end2 = time.time()
print(end2 - start2)  #result = 9.0714    gpu was not used

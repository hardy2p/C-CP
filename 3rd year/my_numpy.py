import math
import numpy as np
from scipy.special import comb

#implementig the math libarary
print(math.sqrt(25)) 
print(math.pi)
print(math.sin(math.radians(30)))
print(math.factorial(5))

#implementing the numpy library
arr = np.array([10,20,25,30,40])
print("Mean of the array")
print(np.mean(arr))  
print("Median ")
print(np.median(arr))
print("Std deviation")
print(np.std(arr)) 
print("Sum of the array")
print(np.sum(arr)) 

#scipy:-it is a advanced version of numpy if we import numpy then there is no need of numpy
print(comb(5, 2))  

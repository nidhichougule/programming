#08-04-2026
#numpy
import numpy as np

# #the basics
# #1D array
# a=np.array([1,2,3],dtype='int16')
# print(a)

# #2D array
# b=np.array([[9.0,8.0,7.0],[6.0,5.0,4.0]])
# print(b)

# #get dimension
# # print(a.ndim)
# # print(b.ndim)

# #get shape
# print(a.shape)
# print(b.shape)

# #get type
# print(a.dtype)
# print(b.dtype)

# #get size 
# #in bits
# print(a.itemsize)
# print(b.itemsize)

# #get total size
# print(a.nbytes)
# print(b.nbytes)

#09-04-2026

a=np.array([[1,2,3,4,5,6,7],[8,9,10,11,12,13,14]])
print(a)

# #get a specific element [r,c]
# print(a[1,5])

# #get a specific row
# print(a[0,:])

# #get a specific column
# print(a[:,2])

# #getting a little more fancy [startindex:endindex:stepsize]
# print(a[0,1:6:2])# 0 is row 

#change any element
# a[:,5]=20
# print(a)

# a[:,2]=[1,2]
# print(a)

# a[1,:]=9
# print(a)

#3D array
b=np.array([[[1,2],[3,4]],[[5,6],[7,8]]])
print(b)

#get specific element
# print(b[0,1,1])

# #replace    
# b[:,1,:]=[[9,9],[8,8]]
# print(b)

#all 0s matrix
np.zeros((2,3))

#all 1s matrix
np.ones((4,2,2),dtype='int32')

#any other number
np.full((2,2),99)

#any other number(full_like)
np.full_like(a,4)

#random decimal numbers
np.random.rand(4,2)
np.random.random_sample(a.shape)

#random integer values
np.random.randint(-4,8,size=(3,3))

#identity matrix
np.identity(5)

#repeat an array
arr=np.array([[1,2,3]])
r1=np.repeat(arr,3,axis=0)
print(r1)

#output 
output=np.ones((5,5))
print(output) 

z=np.zeros((3,3))
z[1,1]=9
print(z)


#initializind differnet types of arrays

#all 0s matrix
np.zeros((5,5))

#all 1s matrix
np.ones((4,2,2),dtype='int32')

#any other number
np.full((2,2),99)

#any other number(full_like)
np.full_like(a,4)

#random decimal numbers
np.random.rand(4,2)
np.random.random_sample(a.shape)

#random integer numbers
np.random.randint(-4,8,size=(3,3))

#identity matrix
np.identity(5)


#10-04-2026

#repeat an array
arr=np.array([[1,2,3]])
r1=np.repeat(arr,3,axis=0)
print(r1)

#output 
output=np.ones((5,5))
print(output) 

z=np.zeros((3,3))
z[1,1]=9
print(z)

output[1:-1,1:-1]=z
print(output)

#be careful while copying arrays
a=np.array([1,2,3])
b=a
b[0]=100
print(a)    

#mathematics
a=np.array([1,2,3,4])
print(a)

#addition
print(a+2)

#subtraction
print(a-2)

#multiplication
print(a*2)

#division
print(a/2)

#power
print(a**2)

#sin
print(np.sin(a))

#cos
print(np.cos(a))

#log
print(np.log(a))

#tan
print(np.tan(a))

#linear algebra
a=np.ones((2,3))
print(a)

b=np.full((3,2),2)
print(b)

print(np.matmul(a,b))

#determinant
c=np.identity(3)
print(np.linalg.det(c))

#statistics
stats=np.array([[1,2,3],[4,5,6]])
print(stats)

#min
print(np.min(stats))

#max
print(np.max(stats))

#sum
print(np.sum(stats))

#vertical sum
print(np.sum(stats,axis=0))

#horizontal sum
print(np.sum(stats,axis=1))

#reorganizing arrays
before=np.array([[1,2,3,4],[5,6,7,8]])
print(before)

after=before.reshape((8,1))
print(after)    

#miscellaneous
#load data from file

filedata=np.genfromtxt('data.txt',delimiter=',')
filedata=filedata.astype('int32')
print(filedata)

#boolean masking and advanced indexing
print(filedata>50)
print(filedata[filedata>50])

#index
a=np.array([1,2,3,4,5,6,7,8,9])
print(a[[1,2,8]])
print(np.any(filedata>50,axis=0))
print(np.all(filedata>50,axis=0))       


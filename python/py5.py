#26-03-2026
#while loop
"""
count=1 #count is iterator 
while count<=5:
    print("hello")
    print(count)
    count+=1

i=1
while i<=5:
    print(i)
    i+=1

i=5
while i>=1:
    print(i)
    i-=1


#print no. 1 to 100 using while loop
i=1
while i<=100:
    print(i)
    i+=1    

0
#print no. 1 to 100 using while loop
i=100
while i>=1:
    print(i)
    i-=1            

#25
#print the multiplication table of 5 using while loop
n=int(input("enter a number: "))
i=1
while i<=10:    
    print(n*i)
    i+=1


#26
#print elements of list using while loop
list=[1,2,3,4,5,6,7,8,11,12,13,14,15]
print(len(list))
i=0
while i<len(list):
    print(list[i]) #list[0],list[1],list[2]...list[14]
    i+=1    


#27
#search for a number in a list using while loop
list=[1,2,3,4,5,6,7,8,9,10]
n=int(input("enter a number: "))            
i=0
while i<len(list):
    if list[i]==n:
        print("number found at index",i)
        break
    i+=1


#break statement
i=0
while i<=10:
    if i==5:
        break
    print(i)
    i+=1
 
#continue statement
i=0
while i<=10:
    if i==5:
        i+=1
        continue
    print(i)
    i+=1


#for loop
list=[1,2,3,4,5]
for i in list:
    print(i)    

#for loop with else    
#print elements of list using for loop    
list="nidhichougle"
for CHAR in list:
    print(CHAR) 
else:
    print("loop is over")           
  

list="nidhichougle"
for CHAR in list:
    if CHAR=="d":
        break 
    print(CHAR) 
else:
    print("loop is over")           


#28
#using for print elements of following list using loop [1,2,3,4,5,6,7,8,9,10,8]
list=[1,2,3,4,5,6,7,8,9,10,8]
for i in list:
    print(i)


#29
#using for search for a number x in a list
list=[1,2,3,4,5,6,7,8,9,10,8]
x=int(input("enter a number: "))
index=0
for i in list:
    if i==x:
        print("number found at index",index)
        break #exit the loop(ex- 8 is twice in the list but we want to print only first index)
    index+=1
else:
    print("number not found")
  

#range function
for i in range(1,11): #1 to 10
    print(i)

for i in range(1,11,2): #1 to 10 with step 2
    print(i)

for i in range(5):
    print(i) #0 to 4

#33
#WAP TO FIND SUM OF FIRST N NATURAL NUMBERS
#(using for loop)
n=int(input("enter a number: "))    
sum=0
for i in range(1,n+1):
    sum+=i
    print("sum of first",n,"natural numbers is",sum)

#(usimg while loop)
n=int(input("enter a number: "))    
sum=0
i=1
while i<=n:
    sum+=i
    i+=1
print("sum of first",n,"natural numbers is",sum)
   

       
#34
#WAP TO FIND FACTORIAL OF FIRST N NUMBER
n=int(input("enter a number: "))
factorial=1
for i in range(1,n+1):
    factorial*=i
print("factorial of",n,"is",factorial)
  """ 



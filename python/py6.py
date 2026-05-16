# #27-03-2026
# #function definition
# def sum(a,b):#parameters
#     sum=a+b
#     return sum#return statement will return the value of sum to the caller function 

# #a=int(input("enter a number: "))
# #b=int(input("enter another number: "))
# #print("sum of",a,"and",b,"is",sum(a,b))#function call #arguments value of a and b will be passed to parameters a and b respectively

# def nidhi():
#     print ("hello world")

# #nidhi()    
# #op=nidhi() #function call
# #print(op) #function does not return any value so it will return None by default

# #avg fo 3 nos
# def avg(a,b,c):
#     sum= a+b+c
#     average=sum/3
#     return average

# # a=int(input("enter a number: "))
# # b=int(input("enter another number: "))
# # c=int(input("enter another number: "))
# #print("average of",3,4,"and",5,"is",avg(3,4,5))

# #function in python 
# #built in functions
# print("hello world")

# def print(
#     *values: object,#values is a tuple which will store all the values passed to print function
#     sep: str | None = " ",#separator will be used to separate the values passed to print function
#     end: str | None = "\n",#end will be used to specify what should be printed at the end of the values passed to print function
#     file: SupportsWrite[str] | None = None,#file will be used to specify where the values passed to print function should be printed
#     flush: Literal[False] = False#flush will be used to specify whether the output should be flushed or not
# ) 

# len("hello world")

#Default parameters
# def cal_product(a=1,b=2):#b is default parameter #if we do not pass any value for b then it will take the default value of 1
#     product=a*b
#     return product
# print(cal_product(5,3))#b will take default value of 1

#35
# #WAF to print len of list without using len function
# list=[1,2,3,4,5,6,7,8,9,10]
# count=0
# for i in list:
#     count+=1    
# print("length of the list is:", count)

# #using while loop without using len function
# list=[1,2,3,4,5,6,7,8,9 ,10]
# count=0             
# i=0


# cities=["pune","mumbai","delhi","kolkata","chennai"]
# heroes=["superman","batman","spiderman","ironman","hulk","thor","captain america","black panther"]

# def print_len(list):
#     print(len(list))

# print_len(cities)    
# print_len(heroes)  

# #36
#WAF to print elements of list in a single line without using len function
# def print_list(list):
#     for i in list:
#         print(i,end=" ")#end will be used to specify what should be printed at the end of the values passed to print function

# print_list(cities)  

# #37
# #cal factorial function
# def factorial(n):
#     fact=1
#     for i in range(1,n+1):
#         fact*=i
#     print(fact)    
#     return fact

# factorial(5)


#38
# #WAF to convert usd to inr
# def usd_to_inr(usd):
#     inr=usd*83
#     print(inr)
#     return inr#83 is the current exchange rate of 1 usd to inr

# usd=int(input("enter amount in usd: "))
# usd_to_inr(usd)

#39
# #WAF to take i/p no. and return o/p as odd or even
# def odd_even(n):
#     if n%2==0:
#         print(n,"is even")
#         return("even")
#     else:
#         print(n,"is odd")
#         return("odd")

# n=int(input("enter a number: "))
# odd_even(n)   


#recursion
#print n to 1 using recursion
# def show(n):
#     if n==0:
#         return
#     print(n)
#     show(n-1) #recursive call

# n= int(input("enter a number: "))
# show(n)

#factorial using recursion
# def factorial(n):
#     if n==0:
#         return 1
#     else:
#         return n*factorial(n-1)

# n=int(input("enter a number: "))
# print("factorial of",n,"is",factorial(n))    


#40
#WAF to find the sum of first n natural numbers using recursion
# def sum(n):
#     if n == 0:
#         return 0
#     return n + sum(n-1)

# n=int(input("enter a number: "))
# print("sum of first",n,"natural numbers is",sum(n))


#41
#WAF to print elements of list using recursion
def print_list(lst, index=0):
    if index >= len(lst):
        return
    print(lst[index])
    print_list(lst, index + 1)

cities=["pune","mumbai","delhi","kolkata","chennai"]
print_list(cities)      
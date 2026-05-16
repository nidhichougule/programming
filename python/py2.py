#23-03-2026
"""
#string lenght
str="apple"
print(len(str))

# concatenation (joined 2 string)
str1= "nidhi"
str2= "chougule"
print(str1+str2)

#escape sequence characters 
str="this is a string.\nwe are creating it in python"
print(str)

#indexing
str="nidhichougule"
print(str[4])

#slicing 
str="nidhichougule"
print(str[0:6])
print(str[0:len(str)])
print(str[:8])
print(str[-12:-7])


#string function
str="i am a coder"
print(str.endswith("er"))

str="i am a coder"
str=str.capitalize()
print(str)

str="i am a coder"
print(str.replace("a","o"))

str="i am a coder"
print(str.find("am"))

str="i am a coder"
print(str.count("a"))

str="i am a coder"
print(str.count("t"))

str="i am a coder"
print(str.find("t"))


#pp to i/p user name & print its length
str= input("enter name:")
print("lenght of name is",len(str))

#pp to find $ occurence in string
str= input("enter string: ")
print("no.of $ occurence is ",str.count("$"))


#conditional statement
#if-elif-else

light="green"
if(light=="red"):
    print("stop")
elif(light=="yellow"):
    print("go slow")
elif(light=="green"):
    print("go")
else:
    print("wrong input")
    
print("end of code")


num=5
if(num<=2):
    print("num is less than or equal to 2")
elif(num>=2):
    print("num is greater than or equal to 2") 
elif(num==2):
    print("num is equal to 2")  



light="blue"
if(light=="red"):
    print("stop")
elif(light=="yellow"):
    print("go slow")
elif(light=="green"):
    print("go")
else:
    print("wrong input")
    
print("end of code")
    


#grade of students based on marks
marks=int(input("enter marks: "))
if(marks>=90 and marks<=100):
    print("grade is A")
elif(marks>=80 and marks<90):
    print("grade is B")
elif(marks>=70 and marks<80):
    print("grade is C")
elif(marks<70):
    print("grade is D")
else:
    print("wrong marks")     


#nested if
#driving license
age=int(input("enter age: "))
if(age>=18):    
    if(age>=80):
        print("you are not allowed to drive")   
    else:
        print("you are allowed to drive")
else:
    print("mimor, you are not allowed to drive")        


#pp to check no. is even or odd
num=int(input("enter no.: "))   
if(num%2==0):
    print("even no.")
else:
    print("odd no.")
"""

#pp to find the greatest of 3 no.
num1=int(input("enter 1 no.: "))    
num2=int(input("enter 2 no.: "))
num3=int(input("enter 3 no.: "))    
if(num1>=num2 and num1>=num3):
    print("greatest no. is: ", num1)
elif(num2>=num3):
    print("greatest no. is: ", num2)
else:
    print("greatest no. is: ", num3)    
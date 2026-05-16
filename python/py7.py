#03-04-2026
# 
# #file handling

# f = open(r"C:\Users\nidhi chougule\Documents\Programming\python\demo.txt", "r")
# data = f.read()
# print(data)
# print(type(data))
# f.close()
# 
#print only 5 characters from the file
# f = open(r"C:\Users\nidhi chougule\Documents\Programming\python\demo.txt", "r")
# data = f.read(5)
# print(data)

#print only one line from the file
# f = open(r"C:\Users\nidhi chougule\Documents\Programming\python\demo.txt", "r")
# li = f.readline()#readline() reads one line from the file and returns it as a string. Each time you call readline(), it reads the next line until it reaches the end of the file (EOF).
# print(li)
# ne2 = f.readline()
# print(ne2)

#write to a file
#either we can create a new file or overwrite the existing file using "w" mode in open() function. If the file already exists, it will be overwritten with the new content. If the file does not exist, a new file will be created.

# f = open(r"C:\Users\nidhi chougule\Documents\Programming\python\demo.txt", "w")
# f.write("give me reasons to believe")
# f.close()


#append to a file
# If you want to add content to an existing file without overwriting it, you can use the "a" mode in the open() function. This allows you to append new content to the end of the file while preserving the existing content.

# f=open("sample.txt","a")
# f.write("i am learning python")
# f.close()

#read and write to a file
# If you want to read from and write to a file, you can use the "r+" mode in the open() function. This allows you to read the existing content of the file and also write new content to it without overwriting the existing data.
# f=open("sample.txt","r+")
# f.write("hello")
# data=f.read()
# print(data) 
# f.close()


# f=open("sample.txt","w+")
# print(f.read())

#with statement
# The with statement in Python is used for resource management, particularly when working with files. It ensures that resources are properly acquired and released, even if an error occurs. When you use the with statement to open a file, it automatically takes care of closing the file after the block of code is executed, which helps prevent resource leaks and ensures that the file is properly closed.
# with open("sample.txt","r") as f:
#     data=f.read() 
#     print(data)

# with open("sample.txt","w") as f:
#     f.write("hello nidhi") 
 

#delete a file
# import os
# os.remove("sample.txt")

#42
#create a file and write some content to it using the with statement. The with statement ensures that the file is properly closed after the block of code is executed, even if an error occurs.
# with open ("question.txt","w" )as f:
#     f.write("hi everyone\n we are learning file handling in python\n i like python")
   
#43
# with open ("question.txt","r" )as f:
#     data=f.read()
#     data=data.replace("python","java")
#     print(data)

#44
# word= "learning"
# with open("question.txt","r")as f:
#     data=f.read()
#     if(data.find(word)!=-1):#-1 is returned when the word is not found in the string. If the word is found, it returns the index of the first occurrence of the word in the string.
#         if word in data:
#             print("word found")
#         else:
#             print("word not found")
# print(data.find(word))
# print(data.index(word))

# word="java"
# print(data.find(word))

#WAF
# def replace_word():
#     with open ("question.txt","r" )as f:
#         data=f.read()
#         data=data.replace("python","java")
#         print(data)

# replace_word()


#44
# def search_word(word):
#     with open("question.txt","r")as f:
#         data=f.read()
#         if word in data:
#             print("word found")
#         else:
#             print("word not found")

# search_word("python")

#45
# WAF to search for a word in a file and return the line number where the word is found. If the word is not found, it should return -1.
# def search_for_line():
#    word="learning"
#    data=True
#    line_no=1
#    with open("question.txt","r")as f:
#     while data:
#       data=f.readline()
#       if word in data:
#             print(f"word found in line {line_no}")
#             return
#       line_no+=1

#     return -1
   

# print(search_for_line())


#46 
#method 1
# with open("question.txt","r")as f:
#     data=f.read()
#     print(data)
#     num=""
#     for i in range(len(data)):
#         if(data[i]==","):
#             print(int(num))
#             num=""
#         else:
#             num+=data[i]


#method2 
#read the content of the file and split it based on the comma delimiter. Then, convert each split string into an integer and print it.
# with open("question.txt", "r") as f:
#     data = f.read()
#     print(data)

#     num = ""
#     for i in range(len(data)):
#         if data[i] == ",":
#             if num != "":   # ✅ check before converting
#                 print(int(num))
#             num = ""
#         else:
#             num += data[i]

#     # handle last number
#     if num != "":
#         print(int(num))


#method 3
count=0
with open("question.txt", "r") as f:
    data = f.read()
    print(data)
    numbers = data.split(",")  # split by comma
    for num in numbers:
        num = num.strip()  # remove whitespace
        if (int(num)) % 2 == 0:  # check if even
            count +=1
    print(f"count of even numbers is {count}")


f.close()    
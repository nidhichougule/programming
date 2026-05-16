#04-04-2026
#oops in python
# class

#create a class
#example of a class
# class student:
#     name= "nidhi"

# #creating an object of the class student
# s1=student()
# print(s1.name)    

# #ex 2
# class car:
#     color= "red"
#     model= "2020"

# c1=car()
# print(c1.color)
# print(c1.model)



#parameterized constructor
# class student:
#     def __init__(self,name):
#         self.name=name  #self is used to refer to the current instance of the class
#         print("add new student details")

# s1=student("nidhi")
# print(s1.name)       
# s1=student("yash")
# print(s1.name)        

# #default constructor
# class student:
#     def __init__(self):
#         pass


# class student:
#     college= "abc college"#class attribute
#     name="anonymous"
#     def __init__(self,name,age,marks):
#         self.name=name #instance attribute/ object attribute
#         self.age=age
#         self.marks=marks
#         #self is used to refer to the current instance of the class
#         print("add new student details")

#     def welcome(self):
#         print("welcome student",self.name)  

#     def get_marks(self):
#         return self.marks      

# # s1=student("nidhi", 20)
# # print(s1.name)
# # print(s1.age)
# # s2=student("yash", 22)
# # print(s2.name)
# # print(s2.age)

# # print(student.college)
# # print(s2.college)

# # s3=(student("",21))
# # print(s3.name)
# # print(s3.age)

# s1=student("nidhi",20,95)
# s1.welcome()
# print(s1.get_marks())

#47
# class student:
#     def __init__(self,name,marks):
#         self.name=name
#         self.marks=marks
#     def get_avg(self):
#         sum=0
#         for val in self.marks:
#             sum+=val
#         print("your avg score is", sum/3)

# s1=student("nidhi",[99,98,100])
# s1.get_avg()        


#48
# create amount class with 2 attributes - balance & acc_no. create methods for debit, credit & print the balance
class Account:
    def __init__(self,bal,acc):
        self.balance=bal
        self.account_no=acc

    def debit(self,amount):
        self.balance-=amount
        print("Rs.",amount,"has been debited from your account")
        print("your balance is",self.balance)

    def credit(self,amount):
        self.balance+=amount
        print("Rs.",amount,"has been credited to your account")
        print("your balance is",self.balance)

    def get_balance(self):
        return self.balance


acc1=Account(10000,12345)
acc1.debit(5000)
acc1.credit(40000)       

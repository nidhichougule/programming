#04-04-2026
#oops in python
#del keyword
# class student:
#     def __init__(self,name):
#         self.name=name  

# s1=student("nidhi")
# print(s1.name)

# del s1
# print(s1.name)

#private attributes and method
# #ex
# class Account:
#     def __init__(self,acc_no,acc_pass):
#         self.acc_no=acc_no
#         self.__acc_pass=acc_pass

#     def reset_acc_pass(self):
#         return self.__acc_pass
 
 
# acc1=Account("13425","wedf")
# print(acc1.acc_no)
# print(acc1.reset_acc_pass())
# print(acc1.__acc_pass)#it will show error to this command bcuz its a private attributes
   


#private method
# class Person:
#     __name="anonymous"
#     def __hello(self):
#         print("hello world!!")

#     def welcome(self):
#         self.__hello()
# p1=Person()
# print(p1.welcome())     


# #inheritance
# #single inheritance
# class car:
#     @staticmethod
#     def start():
#         print("car started..")

#     @staticmethod
#     def stop():
#         print("car stopped..")

# class ToyotaCar(car):
#     def __init__(self, name):
#         self.name = name

# car1 = ToyotaCar("fortuner")
# car2 = ToyotaCar("prius")

# print(car1.name)
# car1.start()
# car1.stop()

# print(car2.name)
# car2.start()
# car2.stop


# multilevel inheritance
# class car:
#     @staticmethod
#     def start():
#         print("car started..")

#     @staticmethod
#     def stop():
#         print("car stopped..")

# class ToyotaCar(car):
#     def __init__(self, brand):
#         self.brand = brand

# class HybridCar(ToyotaCar):
#     def __init__(self,type):
#         self.type = type


# car1= HybridCar("diesel")
# car1.start()
# car1.stop()

# #multiple inheritance
# class A:
#     varA ="welcome to class A"

# class B:
#     varB ="welcome to class B"

# class C(A,B):
#     varC ="welcome to class C"

# c1=C()
# print(c1.varC)
# print(c1.varA)
# print(c1.varB)


#super method
# class car:
#     @staticmethod
#     def start():
#         print("car started..")

#     @staticmethod
#     def stop():
#         print("car stopped..")

# class ToyotaCar(car):
#     def __init__(self, name):
#         self.name = name

# car1 = ToyotaCar("fortuner")
# car2 = ToyotaCar("prius")

# print(car1.name)
# car1.start()
# car1.stop()

# print(car2.name)
# car2.start()
# car2.stop

#class method
# class Person:
#     name="anonymous"

#     @classmethod
#     def change_name(cls,name):
#         cls.name=name

# p1=Person()
# print(p1.name)
# p1.change_name("nidhi")
# print(p1.name)
# print(Person.name)        

#polymorphism
#dunder function
# class complex:
#     def __init__(self,real,img):
#         self.real=real
#         self.img=img

#     def showmunber(self):
#         print(f"{self.real}+{self.img}i")       

#     def __add__(self,num2):
#         real=self.real+num2.real
#         img=self.img+num2.img
#         return complex(real,img)
    
#     def __sub__(self,num2):
#         real=self.real-num2.real
#         img=self.img-num2.img
#         return complex(real,img)

# num1= complex(1,3)
# num1.showmunber()
# num2= complex(2,4)
# num2.showmunber()
# num3=num1-num2
# num3.showmunber()


#49

# class circle:
#     def __init__(self,radius):
#         self.radius=radius

#     def area(self):
#         return 22/7*self.radius*self.radius 
    
#     def perimeter(self):
#         return 2*22/7*self.radius

# c1=circle(21)
# print(c1.area())
# print(c1.perimeter())   


#50

# class Employee:
#     def __init__(self,role,dept,salary):
#         self.role=role
#         self.dept=dept
#         self.salary=salary

#     def show_details(self):
#         print("role:",self.role)
#         print("dept:",self.dept)
#         print("salary:",self.salary)

# class Engineer(Employee):
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#         super().__init__("Engineer","IT","75000")


# engg= Engineer("nidhi",20)
# engg.show_details()     


#51

class Order:
    def __init__(self,item,price):
        self.item = item
        self.price = price

    def __gt__(self, odr2):
        return self.price > odr2.price

odr1 = Order("chips", 20)
odr2 = Order("tea", 15)

print(odr1 > odr2)



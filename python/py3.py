#24-03-2026
#list and tuple
"""
marks=[45.2,67.4,89.4,90.5]
print(marks)
print(type(marks))
print(marks[0])
print(len(marks))


#list slicing
marks=[45.2,67.4,89.4,90.5]
print(marks[0:3])   
print(marks[:3])
print(marks[1:])
print(marks[-4:-1])

#list methods
list=[1,3,2,4,5,3]

list.append(6)
print(list)

list.insert(2,7)
print(list)

list.remove(3)
print(list)

list.sort()
print(list)

list.reverse()
print(list)

list.sort(reverse=True)
print(list)

list.pop(2)
print(list)


#tuple
tup=(1,3,2,4,5,3)
print(tup)
print(type(tup))
print(tup[0])   
print(len(tup))
#tup[0]=10  #ERROR #tuple is immutable
print(tup)



tup=(1,)
print(tup)
print(type(tup))

tup=(2,1,3,1)
print(tup.count(1))
print(tup.index(3))


#pp to ask user to enter 3 fav movies and store in list and print
movie=[]
for i in range(3):
    name=input("enter fav movie: ")
    movie.append(name)
print("your fav movies are: ",movie)
 
#method2
movie=[]
movie.append(input("enter fav movie: "))
movie.append(input("enter fav movie: "))            
movie.append(input("enter fav movie: "))

#palindrome no list
list=[input("enter no.: ")]
temp= list.copy()
temp.reverse()
if list==temp:
    print("palindrome no.")
else:
    print("not palindrome no.")
"""
#count a
tup=("a","b","c","a","d","a")
print(tup.count("a"))
#store value in list and sort in "a" to"d"
list=["a","b","c","a","d","a"]
list.sort()
print(list)
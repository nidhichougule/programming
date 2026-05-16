#25-03-2026
#dictionary
"""
info={
    "name":"nidhi",
    "age":20,
    "city":"mumbai"
}
print(type(info))
print(info["age"])
info["age"]=21
print(info)
info["surname"]="chougule"
print(info)


#null disctionary
info={}
print(info)
print(type(info))
info["name"]="nidhi"
print(info)
"""

#nested dictionary
student={
    "name":"nidhi",
    "age":20,
    "subjects":{
        "maths":85,
        "science":90,
        "english":88
    }
}
"""
print(student)
print(student["subjects"]["science"])   
print(student["subjects"])

#Dictionary methods
student.keys()
print(student.keys())

student.values()
print(student.values()) 

student.items()
print(student.items())

student.get("name")
print(student.get("name"))

student.update({"age":21})
print(student)


#set
s1={1,2,3,4,4,5,"hello","world"}
print(s1)
print(type(s1))


#empty set
s2=set()
print((type(s2)))   
s2.add(1)
s2.add(2)
print(s2)

s2.remove(1)
print(s2)   

set.clear(s2)
print(s2)

s3={1,2,3,4,5}
s3.pop()
print(s3)


set1={1,2,3,4,5}
set2={4,5,6,7,8}
print(set1.union(set2))
print(set1.intersection(set2))

#21
dic={
    "cat":"a small animal",
    "table":["furniture","used for dining"],
}
print(dic)
#22
set={"java","python","c++","python","java","c++","python"}
print(len(set))


#23
dic={}
dic.update({"chem":98})
dic.update({"phy":95})
dic.update({"math":99})
print(dic)

marks={}
x=int(input("enter marks of chem: "))
marks.update({"chem":x})
y=int(input("enter marks of phy: "))
marks.update({"phy":y})  
z=int(input("enter marks of math: "))       
marks.update({"math":z})
print(marks)


#24
value={9,9.0}
print(len(value))
print(value)#here 9 and 9.0 are considered same in set as they are equal in value, so only one of them is stored in the set.

value2={9,"9.0"}
print(len(value))
print(value2)
"""


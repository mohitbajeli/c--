#a= input("enter the name: ")   # input function always takes input in the form of string

#print(type(a))

#a = int(a)    convert a to integer (if possible)

#print(type(a))

b=56
c=80
print(b>c)

#d = input("enter the number you want square ")
#d = int(d)
#sq = d*d
#print("the square of the number is ",sq)

#string operation 

greetings = "good morning, "

name = "mohit"

print(greetings + name)  # concatenation

print(name[0:3])   # 3 element not counted

print(name[-1])  #negative indexing is used when we want to print last element and we do not know the length of the string

name = "mohitisgoodboy"
print(name[0: :2]) # skip every first value
print(name[:-1]) # from starting 
# string function
story = "once upon a time there was a youtuber whose name was harry he was the best "
print(len(story))
print(story.endswith("best")) #returns bool value
print(story.count("m")) # counts the charaacter and string in the string
print(story.capitalize())

#escape sequence 
r = "mohit is learning python \n main motive is to learn machine learning"
print(r)  # \n new line \t tab space 


x = int(input("What is your number >>> "))
p = int(input("What is the biggest power >>> "))

num=[]

while x!=0:
  if p < x:
    num.append(1)
    x-=p
    p=p/2
  else:
    num.append(0)
    p=p/2
print(num)
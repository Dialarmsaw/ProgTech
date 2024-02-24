
n1=int(input("First num >>> "))
n2=int(input("Second num >>> "))
rang=int(input("How many didgits do you want? >>> "))
m10=int(input("Do you want mod 10 or not? >>> "))
if m10==1:
  numbersinfib=[]
  for i in range (rang):
        n1=n1%10
        n2=n2%10
        numbersinfib.append(n1)
        n3=n1+n2
        n3=n3%10
        n1=n2
        n2=n3
        print(n3)
        print("")

if m10==2:
  numbersinfib=[]
  for i in range (rang):
        numbersinfib.append(n1)
        n3=n1+n2
        n1=n2
        n2=n3
        print(n3)




length=int(input("how many numbers are there? >>> "))
numz=[]
for i in range (length):
  n=int(input("num > "))
  numz.append(n)
total=0
for j in range (len(numz)):
  total+=numz[j]
average = total/len(numz)

numz.sort()
if len(numz)%2==0:
  low=((len(numz)/2))-1
  hi=len(numz)/2+1
  midlow=numz[int(low)]
  midhi=numz[int(hi)]
  median=(midhi+midlow)/2
if len(numz)%2!=0:
  median=numz[(len(numz))/2]
mode=numz[len(numz)-1]
print("The mean is >>>",average,"The median is >>>",median,"and >>>",mode,"Is the mode!")

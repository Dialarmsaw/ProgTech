from time import sleep
from random import randrange
from replit import clear

print("This is a random number game! You will pick a number, and i will try to guess it. (The bigger the number you put in, the longer it will take.)")
sleep(10)
clear()
nuum=int(input("Please give me a number, and I will try to guess it. >>> "))

first=int(input("Now, give me the first number in the range. >>> "))
last=int(input("Now, the second number. >>> "))

def guessingcomputer(first,last,nuum):
  num=randrange(first, last)
  trys=0
  while True:
    if num==nuum:
      return trys
    elif num!=nuum:
     if num>nuum:
      num=randrange(first,nuum+1)
      print(num)
     elif num<nuum:
       num=randrange(nuum-1,last)
       print(num)
    trys=trys+1
  
    
    
print ("I got it! HAHAHA! It is ", nuum, "! It took me ", guessingcomputer(first,last,nuum), " tries.", sep="")
print()
print()
    



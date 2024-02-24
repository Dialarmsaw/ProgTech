n1=int(input("First num >>> ")) #Gets 2 numbers
n2=int(input("Second num >>> "))
rang=int(input("How many digits do you want? >>> ")) #gets the amount of didgets
mod=int(input("What mod do you want? >>> ")) #what mod it is going to use

numbersinfib=[]
print(n1, "\n", "\n", n2, "\n\n") #prints the imputed numbers
for i in range (rang):
        n1=n1%mod #makes sure the number is under the mod, if its over it makes it under
        n2=n2%mod
        numbersinfib.append(n1) #adds the number to a list
        if numbersinfib[0]==n1: #checks if the number is the same as the first in the list
          if i>=1:
            if numbersinfib[1]==n2:
              print("You Found a bracelet on round", i, "!") #print what loop you found a bracelet
              break
        n3=n1+n2 #fibbonaucci stuff
        n3=n3%mod
        n1=n2
        n2=n3
        print(n3)
        print("")
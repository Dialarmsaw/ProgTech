words = ['hello', 'hi', 'boop', 'bop']

guesses=[]         
print("This is hangman with no twist what so ever and it is compleatly fair.")
while words>=1:
 guess=input("Please guess a charecter >>>")
 guesses.append(guess)
 if guess in guesses:
   print ("Hey! you already guessed that!")
 guesseses = guess.split("")
 for i in range (len(guesseses)):
   if guesseses[i] in words[n]:
     del words[n]
     n=+1
   else:
    n=+1 

    



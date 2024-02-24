from random import randrange


def hangman():
 name = input("What is your name? ")
 turns = int(input("How many turns do you want?"))
 dict=["fuzzy", "tedious", "hanging", "steep", "voice", "settle", "depend", "unlock",]
 word=dict[randrange(len(dict))]
 guesses = ''
 while turns > 0:         
    failed = 0                 
    for char in word:      
        if char in guesses:    
            print (char, " ", end="")
        else:
            print( "_ ",end="")     
            failed += 1
    if failed == 0:        
        print ("You won!!!")
        break              
    print()
    guess = input("Guess a character:") 
    guesses += guess                    
    if guess not in word:  
        turns -= 1        
        print ("Wrong")
        print ("You have", + turns, 'more guesses')
        if turns == 0:           
            print ("You Loose. The word was ", str(word)+ "." )
            break

print(hangman())
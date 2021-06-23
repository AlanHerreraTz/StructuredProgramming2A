from sys import argv as ag

def addtonumbers (number1, number2):
    print ('Start Program: addtwonumbers executed..\n')
    result = number1+number2

    return result

answer = False

def isEven ( aNumber   ): 
    if (aNumber%2 == 0):
        return True
        #return "its even"
        #print ("Its even")
    else:
        return False
        #return "its odd"
        #print ("Its odd")
        
## isPrime

if __name__ == "__main__":
    #print (f' La suma de dos numeros  = { addtonumbers ( int (ag[1]), int (ag[2])  ) }  ' )
    n1 = int (input ('Dame numero 1: \t'))
    n2 = int (input('Dame numero 2: \t'))

    

    #print (f'La suma de dos numeros = { addtonumbers (n1, n2 )} ' )

    #answer = isEven ( addtonumbers (n1, n2 ) ) #esto se llama stack
    #answer = isEven (2)
    #print (answer)

    if ( isEven ( addtonumbers (n1, n2 ) ) ):
        print ( f'N1: "{n1}" and N2: "{n2}" are your lucky numbers!' )
    else:
        print ( f'N1: "{n1}" and N2: "{n2}" are NOT your lucky numbers!' )


    #if (isPrime (n3)):
    #    print("n3 is prime")
    #else:
    #    print("n3 is not prime")

    # if (isPrime (n4)):
    #    print("n4 is prime")
    #else:
    #    print("n4 is not prime")
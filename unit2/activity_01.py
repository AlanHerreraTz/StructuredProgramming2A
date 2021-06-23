import sys 

#global

num1 = 9

def isPrime ():
    
    #def message (): ##local
    #print ("This is a local function")

    global num1
    num1 = 3

    def localFunction ():
        print ("This is a local function")

    ##localFunction () ##local
    ##message() ##local

    #message ("this is a function...")

    num_div = 1
    count = 2 ## dos cuentas

    if(num1 ==1 ):
        print ("it is not a prime")
        exit ()

    while (count <= num1):
        if (num1 % count ==0):
            num_div += 1
        count +=1

    if (num_div>2):

        return False
    else:
        return True

def message (  ) : ##global
    print ("global variable")

def powtwonumbers ( num1, num2 ):
    pownum1 = pow (num1, 2)
    pownum2 = pow (num2, 2 )
    return (pownum1, pownum2)

##(a , b) = ("hola", "alan") ## ejemplo tupla


if __name__ == "__main__":
    

    print ( f'num1: {num1}')

    print (isPrime ( ))

    print ( f'num1: {num1}')

    (x, y) = powtwonumbers (2, 3)

    print ( powtwonumbers (2, 3)  )

    print ( f' x: {x}, y: {y} ...' )
   

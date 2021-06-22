from sys import argv as ag

def addtonumbers (number1, number2):
    print ('Start Program: addtwonumbers executed..\n')
    result = number1+number2

    return number1 + number2

if __name__ == "__main__":
    print (f' La suma de dos numeros  = { addtonumbers ( int (ag[1]), int (ag[2])  ) }  ' )
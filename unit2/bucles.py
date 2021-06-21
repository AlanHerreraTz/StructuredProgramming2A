from sys import argv

##List container
print("-------------------List container----------------------")
lista =["Red", "White", "Black", "Gray", "Green" ] ## No solo guarda strings, tambien numeros y otras listas

## List comp.
lista2 = [i for i in range (1,101) if i%2==0] ##llegara hasta antes de 101, es decir un numero antes que es 100
print (lista2)

print("-------------------LISTA EVEN AND ODD--------------------------")
listaEvenOdd = [i for i in range (1,101) if i%2==0], [ i for i in range (1,101) if i%2!=0 ]
print(listaEvenOdd)


if __name__ == "__main__":
    i=0
    print (f'programName: {argv[0]}\n' )
    print (lista, len (lista) ) ##size of a list
    
    ## Manual
    #print ( lista [0] )
    #print ( lista [1] )
    #print ( lista [2] )
    #print ( lista [3] )
    ##...
    ##...
    ##...
   #automatic form ##
    index = 0 
    while ( index < len (lista) ):
        print(f'index: {index}, Value: {lista [index]} '  )
        index = index +1 

print ("-----------------lISTA CON FOR-----------------------")

for index in range (0, len (lista) ):
    print(f'index: {index}, Value: {lista [index]} '  )

    
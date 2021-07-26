import sys 

if __name__ == '__main__':

    r1= float(sys.argv[1])
    r2= float(sys.argv[2])

    add = r1+r2
    sub = r1-r2
    mult = r1*r2
    div = r1/r2

    print( "The result of the addition is: {}".format(add))
    print( "The result of the substraction is: {}".format(sub))
    print( "The result of the multiplication is: {}".format(mult))
    print( "The result of the divition is: {}".format(div))

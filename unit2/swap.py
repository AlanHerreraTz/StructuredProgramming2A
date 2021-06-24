import sys 

a = 10
b = 20

print( f'Initial Values: a: {a}, b: {b}') 

def swap (param1, param2):
    global a
    global b
    temp = a
    a = b
    b = temp

if __name__ == "__name__":
    print("Swap Program") 
    #swap ( a, b)
    a,b = b,a
    print(f'values: a: {a}, b: {b}')



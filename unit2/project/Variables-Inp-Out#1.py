#  Design a program that receives a list of numbers using argv argument and print the 
#  average value in the console. (C, Python)

import sys
 
a = len(sys.argv)

add=0
for i in range(1, a):
    add += int(sys.argv[i])

a=a-1
prom= add/a

print("\n The result is: ", prom)
import sys, math

tf= [63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 82]
tfd=list(filter(lambda x: x >= 0, tf))
tfd.sort()
cs=32
cs2=(5/9)
tc=[]
tcf=[]

for n in tfd:
    tc.append(n-cs)
for n in tc:
    tcf.append(n*cs2)

rounded_tcf = [ round(elem, 2) for elem in tcf ]
print("The farenheit temperatures are:\n",tfd)
print("\n")
print ("The celcius temperatures are :\n",rounded_tcf)
print("\n")

def max (val):
    max=val[0]
    for n in range(1, len(val)):
        if val[n]>max:
            max= val[n]
    return max
print ("The maximum temperature recorded in C degrees was: ", max(rounded_tcf))

average=sum(rounded_tcf)/len(rounded_tcf)
avg = round(average, 2)
print ("The average temperature in celsius was: ", avg)
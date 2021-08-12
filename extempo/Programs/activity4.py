  
print("This is a super program that multiply or divide\n")

x1 = float(input("Introduce the 1st number\n"))
x2 = float(input("Introduce the 2nd number\n"))

answer1 = input("Do you want to add?(Yes/No)\n")

if answer1 == "Yes":
    sum = x1 + x2
    print("\nThe sum is {}".format(sum))
else:
    answer2 = input("Do you want to multiply?(Yes/No)\n")
    
    if answer2 == "Yes":
        mul = x1 * x2
        print("\nThe multiplication is {}".format(mul))
    else: 
        print("goodbye, thanks for your time")
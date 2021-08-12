hour = float(input("how many hours did you work?\n"))
extra = 0
salary = 0
if hour > 40:
    extra = (hour - 40) * 1.5
    salary = hour + extra
    print("your wage is: {}".format(salary))
else:
    print("you are paid")
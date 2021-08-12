order = float(input("ow much is your order?\n"))

bank = float(input("how much do you have in your plastic?\n"))

if bank >= order:
    print("paid with plastic")
else:
    print("plastic rejected")
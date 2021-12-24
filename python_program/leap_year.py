# Rule 1 : Multiple of 4, but not multiple of 100
# Rule 2 : Multiple of 400

year = 2100
if(year%4==0 and year%100!=0):
        print("leap year")
elif(year%400==0):
    print("leap year")
else:
    print("Not Leap year")

print("""
      Please Select Your Choice :
      1. Add
      2. Subtract
      3. Multiply""")
choice = int(input("Select Operation from 1,2 or 3 : "))
if(choice in [1,2,3]):    
    a = int(input("Enter First Number : "))
    b = int(input("Enter Second Number : "))
    print("Result is", end=" ")
    if(choice==1):
        print(a+b)
    elif(choice==2):
        print(a-b)
    elif(choice==3):
        print(a*b)
else:
    print("Enter Invalid inputs.")
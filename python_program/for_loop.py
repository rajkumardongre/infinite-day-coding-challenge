# n = 5
# for i in range(1,11):
#     print(n*i, end=" ")

# Smallest Divisor
# n = 13
# for i in range(2,n+1):
#     if(n%i==0):
#         print(i)
#         break 

# avoid multiple of 5
# l = [2,5,2,6,10,6,8,15,8]
# for i in l:
#     if(i%5==0):
#         continue
#     print(i, end=" ")
    
# Tables from 1 to 10
for i in range(1,11):
    for j in range(1,11):
        print(i*j,end="   ")
    print()
    
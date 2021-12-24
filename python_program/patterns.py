# PRINT SQUARE FILL WITH *
# n = 4
# for i in range(n):
#     for j in range(n):
#         print("*",end=" ")
#     print()

# PRINT RIGHT ANGLE TRIANGLE
# WAY 1
# n = 5
# for i in range(n):
#     for j in range(n):
#         if(j<=i):
#             print("*",end=" ")
#     print()
# ---------------------------------------------------
# WAY 2
# n = 5
# for i in range(n):
#     for j in range(i+1):
#         print("*",end=" ")
#     print()

# INVERTED TRIANGLE
# n = 5
# for i in range(n):
#     for j in range(n-i):
#         print("*", end=" ")
#     print()

# PRYMID TRIANGLE
n=5
m = (n*2)-1
for i in range(n):
    for j in range(n-i-1):
        print(" ",end="")
    for k in range(2*i+1):
        print("*",end="")
    print()


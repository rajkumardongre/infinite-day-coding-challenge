# GIVES FACTORIAL (5! => 1 X 2 X 3 X 4 X 5 => 120)
n = 5
res = 1
while(n>0):
    res *= n
    n -= 1
print(res)
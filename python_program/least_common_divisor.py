a = 4
b = 8
min_num = min(a,b)
max_num = max(a, b)
lcm = a*b
for i in range(1,min_num+1):
    if((min_num*i)%max_num==0):
        lcm = min_num*i
        break
        
print(lcm)
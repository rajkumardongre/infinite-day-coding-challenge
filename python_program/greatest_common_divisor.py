a = 6
b = 9
max_num = max(a,b)
min_num = min(a,b)
gcd = max_num
for i in range(1,min_num+1):
    if(min_num%i==0 and max_num%i==0):
        gcd=i 
print(gcd)

n = 101
isPrime = True
for i in range(2,n):
    if(n%i==0):
        isPrime=False

print(n,"is prime no : ",isPrime)
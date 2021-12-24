def isPrime(n):
    if(n<=1):
        return False
    else:
        for i in range(2,n):
            if(n%i==0):
                return False
        else:
            return True

def prime_factorization(n):
    i = 2
    while(n>1):
        if(isPrime(i) and n%i==0):      
            print(i, end=" ")           
            n = n/i                     
        else:
            i = i+1


n = 100      # 50 => 2 5 5
# print(isPrime(24))
prime_factorization(n)
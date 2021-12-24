print("Hello World")
# SWAPING 
a=10
b=20
print("a => ",a,"b => ",b)
a,b=b,a
print("a => ",a,"b => ",b)

# id() METHOD
print(id(5))
a=10
b=10
c=a
print(id(a))
print(id(b))
print(id(c))
# is operator will check wether its operends refering to same memory or not
# return True if referring to same memory else return false
print(a is b)
print(a is c)
print(a is 10)
print(5%25)
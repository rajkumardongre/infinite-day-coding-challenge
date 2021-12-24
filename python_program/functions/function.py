# def fun():
#     print("Hello from the function")
# print("Before calling fun()")
# fun()
# print("after calling fun()")

# def printItem(id, name, price):
#     print(f"id is {id}")
#     print(f"Name is {name}")
#     print(f"Price is {price}")
    
# printItem(1209080, "Ball", 30)

# VARIABLE LENGTH ARGUMENTS
# def sum(*elements):
#     res=0
#     for i in elements:
#         res += i
#     return res
# print(sum(1,2,3))
# print(sum(1,2))
# print(sum(1))

# KEYWORD VARIABLE LENGTH ARGUMENTS
def printItem(**details):
    for d,v in details.items():
        print(f"{d} is {v}")

printItem(id="12133211001", name="Laptop", price=54000)
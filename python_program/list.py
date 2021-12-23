# # LIST
# l = [10, 20, 30]
# print(l)
# l.append(40)    # append() method will add the element at last of list
# print(l)
# l.insert(1, 40) # insert(index, object), insert mwthod will insert the object at give index
# print(l)
# print(20 in l) # in operator will check wether 20 is in list l or not (return True if present else False) 
# print(l.count(40)) #will count number of times 40 occured in list l
# print(l.index(40)) #will return the 1st index ocurrence of 40, if not found 40 throw error

l = [10, 20, 30, 40, 50, 60, 20]
l.remove(20)       # [10, 30, 40, 50, 60, 20]
print(l)    
print(l.pop())      #20
print(l)            #[10, 30, 40, 50, 60]
print(l.pop(2))     #40
print(l)            #[10, 30, 50, 60]
del l[1]            #[10, 50, 60]
print(l)            
del l[:2]
print(l)            #[60]
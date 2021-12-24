s = "abbccbb"
low = 0
high = len(s)-1
while(low<high):
    if(s[low]!=s[high]):
        print("No")
        break
    low += 1
    high -= 1
else:
    print("Yes")
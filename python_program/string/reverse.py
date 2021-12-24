s = "books"
rev=""
n=""
for i in range(len(s)):
    # n= len[s]-1
    rev += s[len(s)-i-1]

print(s, rev)
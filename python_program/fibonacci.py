fst = 0
snd = 1
n = 8
print(fst,snd,end=" ")
for i in range(1,n):
    thr = fst+snd
    print(thr,end=" ")
    fst,snd=snd,thr
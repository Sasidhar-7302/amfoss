x=int(input())
for i in range(x):
    s=0
    l=int(input())
    for i in range(l):
        if i%3==0 or i%5==0:
            s+=i
    print(s)

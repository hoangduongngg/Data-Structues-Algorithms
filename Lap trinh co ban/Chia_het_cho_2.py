def Check(n):
    if n%2:
        return 0
    res = 0
    for i in range(1, n):
        if i%2==0:
            res+=1
    return res

t = int(input())
while t>0:
    n = int(input())
    print(Check(n))
    t-=1
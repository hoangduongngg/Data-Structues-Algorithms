def Sort(a,n):
    res = []
    for i in range(0, n//2):       
        res.append(a[-1-i])
        res.append(a[i])
    if n%2:
        res.append(a[n//2])
    return res
    
t = int (input())
while t>0:
    n = int(input())
    a = sorted([int(i) for i in input().split()])
    print(*Sort(a,n))
    t-=1
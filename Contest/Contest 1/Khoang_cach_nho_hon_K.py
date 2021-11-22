def Run(n,k,a):
    res = 0
    for i in range(1,n):
        if a[i]-a[i-1]<k:
            res+=1
    return res


t  = int(input())
while t>0:
    n, k  = map(int, input().split())
    a = sorted([int(i) for i in input().split()])
    print(Run(n,k,a))
    t-=1
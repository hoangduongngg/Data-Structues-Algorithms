def Try(a,n, x):
    b = [x]
    k = a[0]//x
    for i in range(1,n):
        t = a[i]//k
        if k != a[i] // t:
            return Try(a,n,x+1)
        if a[i]%k==0:
            b.append(t-1)
        else:
            b.append(t)
    return b

def Res_min(x,k):
    t = x//k
    while t*(k+1)<x:


n = int(input())
a = sorted([int(i) for i in input().split()])
print(a)
print(Try(a,n,1))
print(sum(Try(a,n,1)))

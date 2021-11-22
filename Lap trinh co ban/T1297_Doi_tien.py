def Doi_tien(n):
    a = [1, 2, 5, 10, 20, 50, 100, 200, 500, 1000]
    res = 0
    i = len(a)-1
    while i>=0:
        if n//a[i]>0:
            res+=n//a[i]
            n = n%a[i]
        i-=1
    return res

t = int(input())
while t>0:
    n = int(input())
    print(Doi_tien(n))
    t-=1
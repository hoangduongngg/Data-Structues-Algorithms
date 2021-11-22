def Tapcon_ketiep(n,k,a):
    a0 = [i for i in range(n-k+1,n+1)]
    i = k-1
    while i>=0:
        if a[i]<n-k+i+1:
            a[i]+=1
            i+=1
            while i<k:
                a[i] = a[i-1]+1
                i+=1
            break
        else:
            i-=1
    if a==a0:
        for i in range(1,k+1):
            print(i, end = " ")
        print()
    else:
        print(*a)

t = int(input())
while t>0:
    n,k = map(int, input().split())
    a = [int(i) for i in input().split()]
    Tapcon_ketiep(n,k,a)
    t-=1
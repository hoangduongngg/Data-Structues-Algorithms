def Run(n,k,a):
    res = a[0:k]
    print(*res)
    OK = a[n-k:n]
    while res!=OK:
        i = k-1
        while i>=0:
            if a.index(res[i]) < n-k+i:
                res[i] = a[a.index(res[i]) + 1]
                for j in range(i+1, k):
                    res[j] = a[a.index(res[j-1]) + 1]
                break
            i-=1
        print(*res)

t = int(input())
while t>0:
    n, k = map(int, input().split())
    a = sorted([int(i) for i in input().split()])

    Run(n,k,a)
    t-=1
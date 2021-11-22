def Run(n,k,a):
    res = 0
    for i in range(0,n-k):
        for j in range(i+1, i+k+1):
            if len(a[i]) == len(a[j]):
                res+=1

    for i in range(n-k,n):
        for j in range(i+1, n):
            if len(a[i]) == len(a[j]):
                res+=1
    return res

n,k = map(int, input().split())
a = []
for i in range(0,n):
    a.append(input())
print(Run(n,k,a))
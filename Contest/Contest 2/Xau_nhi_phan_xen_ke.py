def Run(n,x):
    if x ==0:
        a = [0]
    else:
        a = [1]
    for i in range(1,n):
        if a[i-1]==0:
            a.append(1)
        else:
            a.append(0)
    return a
n  =int (input())
print(*Run(n,0))
print(*Run(n,1))
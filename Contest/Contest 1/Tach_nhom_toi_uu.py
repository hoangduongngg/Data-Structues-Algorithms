def Tachnhom(n,k,a):
    a= sorted(a)
    res = 1
    for i in range(1, n):
        if a[i] - a[i-1] >k:
            res+=1
        
    return res


n,k = map(int, input().split())
a = [int(i) for i in input().split()]
print(Tachnhom(n,k,a))
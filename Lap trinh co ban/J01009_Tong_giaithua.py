def Tong_gthua(n):
    res = 1
    for i in range(2, n+1):
        res+= gthua(i)
    return res
def gthua(n):
    res = 1
    for i in range(2,n+1):
        res*=i
    return res

print(Tong_gthua(int(input())))
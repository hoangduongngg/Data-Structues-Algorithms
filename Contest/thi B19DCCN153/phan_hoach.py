def gt (n):
    if (n==1): return 1
    return n*gt(n-1)
def xuly(n, a):
    s = sum(a)
    if (s%3!=0):
        return 0
    for i in a:
        if i>(s/3):
            return 0
    return gt(3)


t = (int) (input())
while t>0:
    n = (int) (input())
    a = [int (i) for i in input().split()]

    print(xuly(n,a))
    t-=1


# 2
# 5
# 10 20 25 5 30
# 3
# 1 2 3

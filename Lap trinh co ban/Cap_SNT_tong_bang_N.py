import math
def Cap_snt_tong_bang_N(n, snt):
    if (n-2) in snt:
        return f"{2} {n-2}"
    for i in range(3, n//2 + 1, 2):
        if i in snt and (n-i) in snt:
            return f"{i} {n-i}"
    return -1

def SNT(n):
    if n==2:
        return 1
    if n<2 or n%2==0:
        return 0
    for i in range(3, int(math.sqrt(n)+1), 2):
        if n%i==0:
            return 0
    return 1
snt = [2]
for i in range(3,int(math.pow(10,6)), 2):
    if SNT(i):
        snt.append(i)

t = int(input())
while t>0:
    n = int (input())
    print(Cap_snt_tong_bang_N(n, snt))
    t-=1
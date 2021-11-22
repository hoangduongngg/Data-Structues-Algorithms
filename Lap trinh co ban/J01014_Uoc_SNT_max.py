import math
def Uoc_SNT_max(n):
    if n%2==0:
        res = 2
        while n%2==0: n/=2
    for i in range(3, int(math.sqrt(n))+1, 2):
        if n%i==0:
            res = i
            while n%i==0: n/=i
            
    if n>1: res = n
    return int(res)

t = int(input())
while t>0:
    n = int(input())
    print(Uoc_SNT_max(n))
    t-=1
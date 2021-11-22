import math
def lt(n,k):
    if k==0:
        return 1
    mod = math.pow(10,9)+7
    if k==1:
        return n%mod
    if k%2==0:
        return lt(n*(n%mod), k//2) %mod
    return (n*lt(n*(n%mod), k//2)) %mod

t = int(input())
while t>0:
    n, k = map(int, input().split())
    print(int(lt(n,k)))
    t-=1
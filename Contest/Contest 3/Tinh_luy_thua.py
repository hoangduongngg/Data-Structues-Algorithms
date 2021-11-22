import math
def lt(a,b):
    if b==0:
        return 1
    mod = math.pow(10,9) + 7
    if b==1:
        return a %mod
    if b%2==0:
        return (lt((a%mod)*a, b//2)) %mod
    return ((a%mod)*(lt(a*a, b//2) %mod)) %mod

ok = True
while ok:
    a, b = map(int, input().split())
    if a==b==0:
        ok=False
    else:
        print(round(lt(a,b)))
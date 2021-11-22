def gcd(a,b):
    if b==0:
        return a
    return gcd(b, a%b)

def lcm(a,b):
    return a*b//gcd(a,b)

t = int(input())
while t>0:
    a,b = int(input()), int(input())
    print(lcm(a,b))
    t-=1
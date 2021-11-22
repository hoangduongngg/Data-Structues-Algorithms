def gcd(a,b):
    if b==0:
        return a
    return gcd(b, a%b)
def lcm(a,b):
    return int(a*b/gcd(a,b))

t = int (input())
while t>0:
    a, b = map(int, input().split())
    print(f"{lcm(a,b)} {gcd(a,b)}")
    t-=1
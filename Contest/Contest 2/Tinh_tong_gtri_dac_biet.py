import math
def Gtri(a,b,m):
    res = 0
    a = list(reversed(a))
    for i in range(0, len(a)):
        res += a[i]*math.pow(b, i)
    return int(res%m)

def Run(s,k,b,m):
    res = 0
    for i in range(0, len(s) - k+1):
        a = s[i:k+i]
        res += Gtri(a,b,m)
    return res

s = [int(i) for i in list(input())]
k, b, m = map(int, input().split())
print (Run(s,k,b,m))
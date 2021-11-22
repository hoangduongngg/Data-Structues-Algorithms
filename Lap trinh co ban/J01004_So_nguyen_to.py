import math
def SNT(n):
    if n==2:
        return 1
    if n<2 or n%2==0:
        return 0
    for i in range(3, int(math.sqrt(n)+1), 2):
        if n%i==0:
            return 0
    return 1

t = int(input())
while t>0:
    n = int(input())

    if SNT(n):
        print ("YES")
    else:
        print("NO")
    t-=1
l = [1]
for i in range(1,51):
    l.append(l[i-1]*2+1)

def Dayso(n,k):
    m = l[n-1]//2
    if k == m:
        return n
    if k < m:
        return Dayso(n-1, k)
    return Dayso(n-1, k-m-1)

t = int(input())
while t>0:
    n, k = map(int, input().split())
    print(Dayso(n,k-1))     #k-1: vi tri thu 1 index 0
    t-=1

def Lam_tron(n):
    n = list(reversed(n))
    for i in range(0, len(n)-1):
        if n[i]>=5:
            n[i+1]+=1
        n[i]=0
    for i in list(reversed(n)):
        print(i, end = "")
    print()

t = int(input())
while t>0:
    n = [int(i) for i in list(input())]
    Lam_tron(n)
    t-=1
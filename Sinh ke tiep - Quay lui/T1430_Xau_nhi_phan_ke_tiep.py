def Xau_nhi_phan(n):
    for i in range(len(n)-1, -1, -1):
        if n[i]==1:
            n[i]=0
        else:
            n[i]=1
            break
    for i in n:
        print(i, end = "")
    print()

t = int(input())
while t>0:
    n = [int(i) for i in list(input())]
    Xau_nhi_phan(n)
    t-=1
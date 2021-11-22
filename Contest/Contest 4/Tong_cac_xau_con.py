def Run(n):
    res = int(n)
    for i in range(1, len(n)):
        for j in range(0, len(n)-i+1):
            res += int(n[j:j+i])
    return res

t = int(input())
while t>0:
    n = input()
    print(Run(n))
    t-=1
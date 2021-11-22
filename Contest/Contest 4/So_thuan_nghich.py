def Run(n):
    res = [1]
    l = 1
    i = 1
    while i<len(n)-1:
        j = 1
        while n[i-j]==n[i+j]:
            j+=1
            l+=2
            if (i+j)>=len(n) or (i-j)<0:
                res.append(l)
                l=1
                break

        if n[i-1]!=n[i+1] and l!=1:
            res.append(l)
            l = 1
        i+=1
    return max(res)

t = int(input())
while t>0:
    n = input()
    print(Run(n))
    t-=1
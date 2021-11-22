s = ['']
x = ord('A')
for i in range(0,23):
    s.append(s[i]+chr(x+i)+s[i])


def Run(n,k):
    if n<=23:
        return s[n][k-1]
    elif n==24:
        if k<=len(s[n-1]):
            return Run(n-1,k)
        elif k == len(s[n-1])+1:
            return chr(x+n-1)
        else:
            return s[n-1][k-1-len(s[n-1])-1]
    elif n==25:
        if k<=(len(s[n-2])*2+1):
            return Run(n-1,k)
        elif k == (len(s[n-2])*2+1)+1:
            return chr(x+n-1)
        else:
            return Run(n-1, k - (len(s[n-2])*2+1)-1)

t = int(input())
while t>0:
    n, k = map(int, input().split())
    
    print(Run(n,k))
    t-=1
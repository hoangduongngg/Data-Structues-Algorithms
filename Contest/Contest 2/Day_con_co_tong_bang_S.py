def Run(n,s,a):
    res = 0
    sum = 0
    i = 0
    while i<n:
        if sum+a[i]<s:
            sum+=a[i]
            print(sum)
            res+=1
        if sum+a[i]==s:
            return res+1
        i+=1

n, s = map(int, input().split())
a = sorted([int(i) for i in input().split()], reverse=True)
print(Run(n,s,a))
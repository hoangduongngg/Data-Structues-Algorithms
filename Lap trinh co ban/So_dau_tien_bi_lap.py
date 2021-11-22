def Run(a):
    res = []
    b = [[i,0] for i in a]
    for i in range(0, len(a)):
        if b[i][1]==0:
            b[i] = [a[i],i,1]
        else:
            res.append(a[i],i)
    
    print(res)


        
    return -1
    
t = int (input())
while t>0:
    n = int(input())
    a = input().split()
    if Run(a)==-1:
        print("NO")
    else:
        print(Run(a))
    t-=1
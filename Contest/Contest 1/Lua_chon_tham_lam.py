def Run(n,s):
    res = []
    if 9*n<s or (s==0 and n>1):
        return [-1, -1]
    return [Min(n,s), Max(n,s)]
    
def Max(n,s):
    res = ""
    while s>9:
        res+='9'
        s-=9
    res+=str(s)
    for i in range(0, n - len(res)):
        res+='0'
    return res

def Min(n,s):
    res = ""
    while s>9:
        res='9'+res
        s-=9
    if n-len(res)==1:
        res= str(s) + res
    else:
        res = str(s-1) + res
        for i in range(0,n- len(res)-1):
            res = '0'+res
        res = '1' + res

    return res

n , s = map(int, input().split())
print(*Run(n,s))

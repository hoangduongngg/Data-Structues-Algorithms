def Doi_5_6(n):
    res = ''
    for i in n:
        if i=='5':
            res+='6'
        else:
            res+=i
    return res

def Doi_6_5(n):
    res = ''
    for i in n:
        if i=='6':
            res+='5'
        else:
            res+=i
    return res

def Max(a,b):
    return int(Doi_5_6(a)) + int(Doi_5_6(b))
def Min(a,b):
    return int(Doi_6_5(a)) + int(Doi_6_5(b))

a, b = map(str, input().split())
print(f"{Min(a,b)} {Max(a,b)}")
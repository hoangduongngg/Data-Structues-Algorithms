def Check(num): 
    a = ['2','3','5','7']
    for i in num:
        if i not in a:
            return 0
    return 1
def Run(s):
    res = []
    for i in list(set(s)):
        if Check(i):
            res.append(i)

    for i in s:
        if i in res:
            print(f"{i} {s.count(i)}")
            res.remove(i)

s = input().split()
Run(s)
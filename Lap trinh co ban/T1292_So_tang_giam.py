def Check(s):
    if So_giam(s) or So_tang(s):
        return 1
    return 0

def So_tang(s):
    s = [int(i) for i in s]
    for i in range(0,len(s)-1):
        if s[i]>s[i+1]:
            return 0
    return 1
def So_giam(s):
    s = [int(i) for i in s]
    for i in range(0,len(s)-1):
        if s[i]<s[i+1]:
            return 0
    return 1

t = int (input())
while t>0:
    s = input()
    if Check(s):
        print("YES")
    else:
        print("NO")
    t-=1
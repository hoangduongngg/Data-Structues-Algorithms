def Check(s):
    if int(s[0]) + int(s[4]) == int(s[-1]):
        return 1
    else:
        return 0

t = int (input())
while t>0:
    s = input()
    if Check(s):
        print("YES")
    else:
        print("NO")
    t-=1
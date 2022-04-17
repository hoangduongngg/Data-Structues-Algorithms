# def SNT(n):
#     if (n==2): return True
#     if (n<2 or n%2==0): return False
#     i = 3
#     while (i*i<=n):
#         if (n%i==0): return False
#         i+=2
#     return True

def tich_cs(n):
    if (n<10):
        print(n)
    else:
        res = []
        for i in range(9,1,-1):
            while (n%i==0):
                res.append(i)
                n/=i
            # if (SNT(n)):
            #     break
        
        if (n>1):
            print(-1)
        else:
            res = sorted(res)
            for i in res:
                print(i, end = "")
            print()
    

t = (int)(input())
while t>0:
    n = int(input())
    tich_cs(n)
    t-=1
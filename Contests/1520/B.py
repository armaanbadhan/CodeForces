import math

t = int(input())

for _ in range(t):
    n = int(input())
    if n < 10:
        print(n)
        continue
    poten = int(math.log10(n))
    res = (poten)*9
    num = "1"*(poten+1)
    num = int(num)
    org = num
    while num <= n:
        res += 1
        num += org
    print(res)

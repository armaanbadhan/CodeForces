
M = 2050

t = int(input())

for _ in range(t):
    n = int(input())
    res = 0
    l = len(str(n))-3
    arr = [M*(10**i) for i in range(l)][::-1]
    for i in arr:
        temp = n//i
        res += temp
        n -= temp*i
    print(-1 if n else res)

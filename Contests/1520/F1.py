
n, t = map(int, input().strip().split())
k = int(input())

lo = 0
hi = n-1
ind = (n-1)//2

while True:
    print("?", lo + 1, hi + 1)
    ind = (lo + hi)//2
    got = int(input())
    if k == got:
        print("!hehe", ind)
        exit()
    print(k, got)
    if k < got:
        print("ha")
        k += got
        lo = ind
    if k > got:
        print("he")
        hi = ind

# ????????

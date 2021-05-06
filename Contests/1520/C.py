
t = int(input())

for _ in range(t):
    n = int(input())
    if n == 1:
        print(1)
        continue
    if n == 2:
        print(-1)
        continue
    arr = []
    for i in range(n*n):
        if (i+1)&1:
            arr.append(i+1)
    for i in range(n*n):
        if (i+1)&1 == 0:
            arr.append(i+1)
    for i in range(0, n*n, n):
        print(*arr[i:i+n])

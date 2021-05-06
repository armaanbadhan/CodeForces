
t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    res = 0
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] - arr[j] == i - j:
                res += 1
                print("       ", i, j)
    print(res)

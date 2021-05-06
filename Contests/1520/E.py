
t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()
    arr = []
    curr = s[0]
    cnt = 1
    res = 0
    for i in range(1, n):
        if curr == arr[i]:
            cnt += 1
        else:
            arr.append(cnt)
            cnt = 0
            curr = s[i]

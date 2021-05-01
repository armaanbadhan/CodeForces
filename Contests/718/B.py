
t = int(input())

for _ in range(t):
    n, m = map(int, input().strip().split())
    arr = [0]*n
    for i in range(n):
        temp = list(map(int, input().strip().split()))
        temp.sort()
        arr[i] = temp
    arr.sort(key=lambda x: x[0])
    im = 0
    
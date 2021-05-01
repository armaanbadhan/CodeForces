
def notfound():
    print(-1)
    exit()


n = int(input())
dia = list(map(int, input().strip().split()))

arr = [[0 for i in range(n)] for j in range(n)]


for i in range(n):
    num = dia[i]
    k, l = i, i
    cnt = 0
    while l >= 0 and k < n:
        arr[k][l] = num
        cnt += 1
        if cnt == num:
            break
        # print(k, l)
        if l >= 1 and arr[k][l-1] == 0:
            l -= 1
        elif k-2 < n and arr[k+1][l] == 0:
            k += 1
        else:
            notfound()


for i in range(n):
    print(*arr[i][:i+1])

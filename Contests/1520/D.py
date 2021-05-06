
calc = lambda x : (x*(x-1))//2

t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    res = 0
    for i in range(n):
        arr[i] -= i+1
    # for i in range(n):
    #     if arr[i] == 0:
    #         res += 1
    dic = {}
    for i in range(n):
        if arr[i] in dic:
            dic[arr[i]] += 1
        else:
            dic[arr[i]] = 1
    for i in dic:
        if dic[i] > 1:
            res += calc(dic[i])
    print(res)

# arr[i] - arr[j] = i - j ---> arr[i] - i = arr[j] - j

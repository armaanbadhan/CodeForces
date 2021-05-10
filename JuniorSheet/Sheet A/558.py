
n = int(input())

prr = []
nrr = []

for n in range(n):
    a, b = map(int, input().strip().split())
    if a > 0:
        prr.append([a, b])
    else:
        nrr.append([a, b])

prr.sort(key=lambda x: abs(x[0]))
nrr.sort(key=lambda x: abs(x[0]))

res = 0

num = min(len(prr), len(nrr))

i = 0
while i < num:
    res += prr[i][1]
    res += nrr[i][1]
    i += 1


if len(prr) > len(nrr):
    res += prr[i][1]
if len(nrr) > len(prr):
    res += nrr[i][1]

print(res)

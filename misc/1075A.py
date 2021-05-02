
n = int(input())
x, y = map(int, input().strip().split())

d1 = x - 1 + y - 1
d2 = n - x + n - y

print("White" if d1 < d2 else "Black")

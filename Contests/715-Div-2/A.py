import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")


def solve():
    n = int(input())
    arr = get_array()
    odd = []
    even = []
    for i in arr:
        if i&1:
            odd.append(i)
        else:
            even.append(i)
    odd += even
    p_arr(odd)


t = get_int()

for _ in range(t):
    solve()

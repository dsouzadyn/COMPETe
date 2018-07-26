def f(n):
    if n & 1 == 0:
        return int(10**(n/2))
    else:
        return int(10**((n-1)/2))

t = int(input())

for x in range(t):
    n = int(input())
    if n == 1:
        print(1, 1)
    else:
        print(1, f(n))

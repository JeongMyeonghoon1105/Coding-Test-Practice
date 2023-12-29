memo = [False, 1, 2]

def f(n):
    if n <= 2:
        return n
    memo.append(f(n-1)+f(n-2))
    return memo[n]

n = int(input())
f(n)
print(memo[n] % 15746)

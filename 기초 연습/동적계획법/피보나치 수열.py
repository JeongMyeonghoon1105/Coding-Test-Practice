memo = [0, 1]

def f(n):
  if n <= 1:
    return n
  if len(memo) != n:
    memo.append(f(n-1))
  return memo[n-1]+memo[n-2]

n = int(input())
print(f(n))
print(memo)

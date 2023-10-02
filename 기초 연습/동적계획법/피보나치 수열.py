memo = [0, 1]

def f(i):
  if i <= 1:
    return i
  if i >= len(memo):
    memo.append(f(i-1) + f(i-2))
  return memo[i]

n = int(input())
print(f(n))
print(memo)

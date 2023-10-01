f = [1, 1]

def fibonacci(n):
  if n <= 1:
    return 1
  if len(f) != n:
    f.append(fibonacci(n-1))
  return f[n-1]+f[n-2]

n = int(input())
print(fibonacci(n))
print(f)

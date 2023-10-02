memo = []

def f(s, i, sum):
  if i >= len(s):
    return
  sum += s[i]
  memo.append(sum)
  memo.append(f(s, i+1, 0))
  memo.append(f(s, i+1, sum))
  return

n = int(input())
series = list(map(int, input().split()))
f(series, 0, 0)
# print(memo)
# print(max(memo))
m = memo[0]
for i in memo:
  if not (i == None):
    if m < i:
      m = i
print(m)

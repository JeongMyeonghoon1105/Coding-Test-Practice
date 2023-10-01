Max = 0

def sumup(s, i, m, c):
  global Max

  if i == len(s)-1:
    m = s[-1]
  else:
    m += s[i]
  
  if i <= 0:
    if Max < m:
      Max = m
    # sum.append(m)
    return
  elif i <= 1 and c <= 0:
    m += s[0]
    # sum.append(m)
    if Max < m:
      Max = m
    return
  elif i <= 1:
    # sum.append(m)
    if Max < m:
      Max = m
    return
  
  if c < 1:
    sumup(s, i-1, m, c+1)
  sumup(s, i-2, m, 0)

n = int(input())
s = []
sum = []

for i in range(n):
  s.append(int(input()))

sumup(s, len(s)-1, 0, 0)
# print(sum)
# print(max(sum))
print(Max)

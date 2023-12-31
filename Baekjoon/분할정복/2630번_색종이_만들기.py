import sys

global blue
global white
blue = 0
white = 0

def cut(p, r_index, c_index, length):
  global blue
  global white

  if length == 1:
    if p[r_index][c_index] == 0:
      blue += 1
    else:
      white += 1
      return
  
  color = p[r_index][c_index]

  for i in range(r_index, r_index + length):
    for j in range(c_index, c_index + length):
      if p[i][j] != color:
        cut(p, r_index, c_index, length // 2)
        cut(p, r_index + length // 2, c_index, length // 2)
        cut(p, r_index, c_index + length // 2, length // 2)
        cut(p, r_index + length // 2, c_index + length // 2, length // 2)
  
  if p[r_index][c_index] == 0:
    blue += 1
  else:
    white += 1
    return

paper = []
n = int(input())

for i in range(n):
  paper.append(sys.stdin.readline()[:-1])

print(white)
print(blue)

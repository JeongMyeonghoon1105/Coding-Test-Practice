# memo = []

# # O(2^n) 풀이
# # def f(s, i, sum):
# #   if i >= len(s):
# #     return
# #   sum += s[i]
# #   memo.append(sum)
# #   memo.append(f(s, i+1, 0))
# #   memo.append(f(s, i+1, sum))
# #   return

# # O(n^2) 풀이
# # def f(s):
# #   start = 0
# #   end = 0
# #   while start < len(s):
# #     end = start
# #     while end < len(s):
# #       sum = 0
# #       for i in range(start, end+1):
# #         sum += s[i]
# #       memo.append(sum)
# #       end += 1
# #     start += 1
# #   print(max(memo))

# # ??? 풀이
# # def f(s, start, end):
# #   if start == end:
# #     memo.append(s[start])
# #   else:
# #     memo.append(f(s, start, end-1)+s[end])
# #   return memo[-1]

# n = int(input())
# series = list(map(int, input().split()))

# start = 0
# end = 0
# while end < len(series):
#   sum = 0
#   for i in range(start, end+1):
#     sum += series[i]
#   memo.append(sum)
#   end += 1

# # f(series, 0, n-1)
# s = series[0]
# index = 1
# for stage in range(1, n):
#   for j in range(n-stage):
#     memo.append(memo[index+j]-series[stage-1])
#   s += series[stage]
#   index += (n+1-stage)
#   # print(index) 
#   # print(memo)

# # for i in range(n):
# #   f(series, i, n-1)
# print(max(memo))  



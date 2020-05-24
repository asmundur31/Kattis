import math
def inverseFact(n):
  if len(n)<=3:
    y = 1
    i = 1
    while y!=int(n):
      i = i+1
      y = y*i
    return i
  else:
    lengd = len(n)
    i = 1
    sum = 0
    while math.floor(sum)+1!=lengd:
      sum = sum+math.log10(i)
      i = i+1
    return i-1
x = str(input())
print(inverseFact(x))
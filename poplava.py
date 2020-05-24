import math
s = str(input())
n = int(s.split(' ')[0])
x = int(s.split(' ')[1])
if n>2:
  max = (n-2)*(n-1)/2
  if x<=max:
    a = math.ceil((-1+math.sqrt(1+8*x))/2)
    takaUt = int(a*(a+1)/2)-x
    print(str(n)+" ",end='')
    for i in range(a+1,0,-1):
      if i!=takaUt+1:
        print(str(n-i)+" ",end='')
    print(str(n-(takaUt+1))+" ",end='')
    for i in range(a+2,n):
      print(str(n-i)+" ",end='')
    print()
  else:
    print(-1)
else:
  print(-1)
import math
LP=[]
def init(c,n10,n50,n100):
  for i in range(c+1):
    new1 = []
    for j in range(n50+1):
      new2 = []
      for k in range(n100+1):
        new2.append(1500)
      new1.append(new2)
    LP.append(new1)

def FastLP(c,n50,n100):
  for i in range(n50+1):
    for j in range(n100+1):
      LP[0][i][j] = 0
  for x in range(1,c+1):
    for y in range(n50+1):
      for z in range(n100+1):
        if z-1>=0:
          if y-2>=0:
            LP[x][y][z] = min(LP[x-1][y][z-1]+1,LP[x-1][y-2][z]+2,LP[x-1][y-1][z]+4,LP[x-1][y][z]+8)
          elif y-1>=0:
            LP[x][y][z] = min(LP[x-1][y][z-1]+1,LP[x-1][y-1][z]+4,LP[x-1][y][z]+8)
          else:
            LP[x][y][z] = min(LP[x-1][y][z-1]+1,LP[x-1][y][z]+8)
        else:
          if y-2>=0:
            LP[x][y][z] = min(LP[x-1][y-2][z]+2,LP[x-1][y-1][z]+4,LP[x-1][y][z]+8)
          elif y-1>=0:
            LP[x][y][z] = min(LP[x-1][y-1][z]+4,LP[x-1][y][z]+8)
          else:
            LP[x][y][z] = LP[x-1][y][z]+8
  return LP[c][n50][n100]

# Tökum inn gögn
inntak = input()
c = int(inntak.split()[0])
n10 = int(inntak.split()[1])
n50 = int(inntak.split()[2])
n100 = int(inntak.split()[3])
# Upphafsstillum LP
init(c,n10,n50,n100)
count = FastLP(c,n50,n100)
print(count)

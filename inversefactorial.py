import math
x = int(input())
fasti=math.log(x)
def f(n):
    return n*math.log(n)-n+1+0.5*math.log(n)-fasti
def df(n):
    return math.log(n)+0.5/n
def dx(f, n):
    return abs(0-f(n))
def newtons_method(f, df, n0, e):
    delta = dx(f, n0)
    while delta > e:
        n0 = n0 - f(n0)/df(n0)
        delta = dx(f, n0)
    print int(math.ceil(n0))
newtons_method(f, df, 100, 1e-5)

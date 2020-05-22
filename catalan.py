fact = []
fact.append(1)
for i in range(1,10001):
    fact.append(fact[i-1]*i)

def choose(n,k):
    res=fact[n]
    res //= fact[k]
    res //= fact[n - k]
    return res;

def catalan(n):
    return choose(2*n,n)//(n+1)

x=int(input())
for i in range(1,x+1):
    y=int(input())
    print(catalan(y))

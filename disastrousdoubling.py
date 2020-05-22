n = int(raw_input())
teknar = 0
eftir = 2
er = 0
teknar = map(int, raw_input().split())
for i in range(0,n):
    if eftir<teknar[i]:
        er = 1
        print "error"
        break
    eftir -= teknar[i]
    if i!=n-1:
        eftir *= 2
if er==0:
    print eftir%1000000007

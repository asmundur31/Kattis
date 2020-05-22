import sys
n = int(raw_input())
while n!=0:
    tala=n-1
    count=0
    sys.stdout.write("{ ")
    while tala>0:
        if tala%2==1:
            sys.stdout.write(str(3**count))
        if tala/2>0 and tala%2==1:
            sys.stdout.write(", ")
        tala/=2
        count=count+1
    sys.stdout.write(" }\n")
    n = int(raw_input())

def factor(n):
    list =[]
    i=2
    while n!=1:
        i=2
        while i<=n:
            if n%i==0:
                list.append(i)
                n=n/i
                break
            i=i+1
    return list

n = int(raw_input())
list = factor(n)
max = 0
i = 0
gildi = n
while i<len(list)-1:
    count = 1
    while list[i]==list[i+1]:
        count+=1
        if i<len(list)-2:
            i+=1
        else:
            break
    if max<count:
        max=count
        gildi=list[i]
    i+=1
print gildi

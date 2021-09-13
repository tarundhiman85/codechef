x = list(map(int, input().split()))
d1=x[0]
v1=x[1]
d2=x[2]
v2=x[3]
p=x[4]
count_day=1
vacc=0
if d1==d2:
    count_day=0
    count_day=d2-1
if d1<d2 and d1!=d2:
    count_day=d1-1
elif d1>d2 and d1!=d2:
    count_day=d2-1
while True:
    if d1<d2:
        d1=d1+1
        vacc=vacc+v1
        count_day=count_day+1
    elif d2<d1:
        d2=d2+1
        vacc=vacc+v2
        count_day=count_day+1
    else:
        vacc=vacc+(v1+v2)
        count_day=count_day+1
    if vacc>=p:
        break
print(count_day)    
path = input()
sum=0
count=0
for i in path:
    if i=="U":
        sum+=1
    else:
        sum+=-1
    if sum==0 and i =="U": 
        count+=1
print(count)
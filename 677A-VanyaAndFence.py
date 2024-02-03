a,b = map(int,input().split())
x = list(map(int,input().split()))
 
sum = 0
 
for i in x:
  if i>b:
    sum += 2
  else:
    sum += 1
 
print(sum)
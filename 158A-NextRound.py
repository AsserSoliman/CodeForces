a,b = map(int,input().split())
x = list(map(int,input().split()))
 
s = x[b-1]
sum = 0
 
if s != 0:
  for i in x:
    if i >= s:
      sum += 1
else:
  for i in x:
    if i > s:
      sum += 1
 
print(sum)
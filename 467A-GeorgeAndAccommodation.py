t = int(input())
sum = 0
 
for i in range(t):
  a,b = input().split()
  if int(b)-int(a)>=2:
    sum += 1
 
print(sum)
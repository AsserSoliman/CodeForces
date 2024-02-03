t = int(input())
 
current = 0
max  = 0
 
for i in range(t):
  x = list(map(int,input().split()))
  current += (x[1]-x[0])
  if current > max:
    max = current
 
print(max)
t = int(input())
 
min = 1440
 
for i in range(t):
 
  a,b = map(int,input().split())
  sum = a*60 + b
 
  print(min-sum)
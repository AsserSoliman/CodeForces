import math
 
x = int(input())
if x%2==0:
  print(x//2)
else:
  print(-(math.ceil(x/2)))
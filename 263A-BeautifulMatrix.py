def pos(x):
  for i in range(5):
    for j in range(5):
      if x[i][j] == 1:
        return (i,j)
      
x = []
 
for i in range(5):
  y = list(map(int,input().split()))
  x.append(y)
 
a,b = pos(x)
 
print(abs(2-a)+abs(2-b))
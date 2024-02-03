def beautiful(x):
  a = x[0][0] < x[0][1]
  b = x[1][0] < x[1][1]
  c = x[0][0] < x[1][0]
  d = x[0][1] < x[1][1]
  
  if a and b and c and d :
    return True
  return False
 
def shift(x):
  a,b,c,d = x[0][0],x[0][1],x[1][0],x[1][1] 
  x[0][0],x[0][1],x[1][0],x[1][1] = c,a,d,b
 
  
t = int(input())
 
for i in range(t):
  t = []
  for j in range(2):
    x = list(map(int,input().split()))
    t.append(x)
 
  if beautiful(t):
    print('YES')
  else:
    flag = False 
    for ii in range(3):
      shift(t)
      if beautiful(t):
        flag = True
        break
 
    if flag:
       print('YES')
    else:
      print('NO')
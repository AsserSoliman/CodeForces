t = int(input())
 
for i in range(t):
 
  x = input()
  
  if len(x)>10:
    s = str(x[0]) +str(len(x)-2) + str(x[-1])
    print(s)
  else:
    print(x)
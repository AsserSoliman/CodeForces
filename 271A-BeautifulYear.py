def good(x):
  l = list(str(x))
  g = set(l)
  if len(l) == len(g):
    return True
  return False
  
 
x = int(input())
y = x+1
 
while True:
  if good(y) :
    print(y)
    break
  y += 1
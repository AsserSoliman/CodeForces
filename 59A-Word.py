x = input()
up = 0
low = 0
for i in x:
  if i.isupper():
    up += 1 
  else:
    low += 1
    
if up <= low :
  print(x.lower())
else:
  print(x.upper())
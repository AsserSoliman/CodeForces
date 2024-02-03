x = input()
 
count = 0
current = ' '
 
for i in range(len(x)):
  if current == x[i]:
    count += 1
  else:
    current = x[i]
    count = 1
 
 
  if count == 7:
    break
 
 
if count == 7:
    print('YES')
else:
  print('NO')
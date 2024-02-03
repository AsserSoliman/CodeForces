x = input()
s = 'hello'
c = 0
for i in x:
  if i == s[c]:
    c += 1
 
  if c == 5:
    break
 
if c==5:
  print('YES')
else:
  print('NO')
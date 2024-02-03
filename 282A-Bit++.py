
t = int(input())
s = 0
for i in range(t):
  x = input()
  if x[1] == '+':
    s += 1
  else:
    s -= 1
 
print(s)
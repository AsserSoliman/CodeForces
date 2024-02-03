pi = '314159265358979323846264338327'
 
t = int(input())
 
for i in range(t):
  sum = 0
  x = input()
  for i in range(len(x)):
    if x[i] == pi[i]:
      sum += 1
    else:
      break
  print(sum)
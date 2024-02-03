
t = int(input())
sum = 0
for i in range(t):
  x = input()
  if x.count('1')>=2:
    sum += 1
 
print(sum)
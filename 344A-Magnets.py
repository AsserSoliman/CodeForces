t = int(input())
x = input()
 
block = 1
 
for i in range(t-1):
  y = input()
 
  if x[-1] == y[0]:
    block += 1
 
  x = y
 
print(block)
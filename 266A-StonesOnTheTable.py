t = int(input())
x = input()
 
count = 0
 
for i in range(t-1):
  if x[i] == x[i+1]:
    count += 1
 
print(count)
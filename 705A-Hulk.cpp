n = int(input())
x = "I hate that"
if n == 1:
  print("I hate it")
else:
  for i in range(2,n):
    if i % 2 ==0:
      x += " I love that"
    else:
      x += " I hate that"
 
  if n % 2 ==0:
        x += " I love it"
  else:
        x += " I hate it"
 
  print(x)
    
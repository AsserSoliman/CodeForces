x = input().lower()
ans = ''
vowels = 'aeiou'
 
for i in x:
  if not i in vowels:
    ans += ('.'+i)
 
print(ans)
 
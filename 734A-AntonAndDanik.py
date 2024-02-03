t = int(input())
data = {"Tetrahedron":4,"Cube":6,"Octahedron":8,"Dodecahedron":12,"Icosahedron":20}
 
sum = 0
for i in range(t):
  x = input()
  sum += data[x]
print(sum)
a=[list(map(int,input().split())) for _ in range(9)]
for i in range(9):
  compete=set()
  for j in range(9):
    compete.add(a[i][j])
  if len(compete)!=9:
    print("No")
    exit()
for i in range(9):
  compete=set()
  for j in range(9):
    compete.add(a[j][i])
  if len(compete)!=9:
    print("No")
    exit()
for i in range(3):
  for j in range(3):
    compete=set()
    for k in range(3):
      for l in range(3):
        compete.add(a[3*i+k][3*j+l])
    if len(compete)!=9:
      print("No")
      exit()
print("Yes")
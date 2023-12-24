N,M=map(int,input().split())
G=list(list())
for i in range(M):
  n=list(map(int,input().split()))
  G.append(n[1:])
g=[set() for i in range(N)]
for i in range(M):
  for j in G[i]:
    for k in G[i]:
      g[j-1].add(k)
for i in g:
  if not len(i)==N:
    print("No")
    exit()
print("Yes")
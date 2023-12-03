n,s,m,l=map(int,input().split())
ans=10**9
for a in range(100):
  for b in range(100):
    for c in range(100):
      if(a*6+b*8+c*12>=n):
        ans=min(ans,a*s+b*m+c*l)
print(ans)
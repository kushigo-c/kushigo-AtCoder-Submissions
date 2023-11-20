h,w=map(int,input().split())
s=[list(input()) for _ in range(h)]
px,py=0,0
flg=True
for i in range(h):
  for j in range(w):
    if s[i][j]=="o":
      if flg:
        px=j
        py=i
        flg=False
      else:
        print(abs(px-j)+abs(py-i))
n=input()
a=list(map(int,input().split()))
print(sorted(set(a),reverse=True)[1])
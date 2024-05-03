BOUND = 300000
table = [True] * BOUND
ans=0
for i in range(2,BOUND):
  if table[i]==True:
    #print(i,end=' ')
    ans += 1 #找到1個質數
    for k in range(i+i,BOUND,i):
      table[k] =False

print("質數有:",ans,"個")
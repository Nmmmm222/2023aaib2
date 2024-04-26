N = int(input('請輸入N:'))
#以前適用 for迴圈 ，今天用函式呼叫函式來寫
def func(n):
  if n==1:return 1 #終止條件，像數學歸納法N=1成立
  return n * func(n-1)  
ans=func(N)
print(ans)

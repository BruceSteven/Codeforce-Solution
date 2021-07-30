import sys 
input = sys.stdin.buffer.readline
t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().strip().split()))
res = 0
for i in range(n-1):
    res = max(res,a[i]*a[i+1]);
print(res)

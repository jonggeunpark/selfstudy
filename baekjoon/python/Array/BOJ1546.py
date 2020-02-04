a = int(input())
b = list(map(int, input().split()))
c = 0
max_score = max(b)

for i in range(a):
    c += b[i] / max_score * 100

print(c / a)

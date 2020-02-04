a = 1
b = list(0 for _ in range(10))

for i in range(3):
    a = a * int(input())

while a != 0:
    b[a % 10] += 1
    a = a // 10

for i in range(10):
    print(b[i])
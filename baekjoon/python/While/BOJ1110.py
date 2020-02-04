a = int(input())
tmp = (a % 10) * 10 + (a / 10 + a % 10) % 10
count = 1

while tmp == a:
    tmp = (tmp % 10) * 10 + (10 + tmp / 10 + tmp % 10) % 10
    count += 1

print(count)

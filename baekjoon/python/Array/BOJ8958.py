a = int(input())

for _ in range(a):
    b = input()
    score = 0
    crtScore = 1
    for i in b:
        if i == 'O':
            score += crtScore
            crtScore += 1
        else:
            crtScore = 1
    print(score)



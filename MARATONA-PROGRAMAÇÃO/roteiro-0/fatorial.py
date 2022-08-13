n = int(input())
fat = 1
for i in range(n, 1, -1):
    fat *= i

print(fat)
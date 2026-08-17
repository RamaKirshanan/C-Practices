count = 0
x = int(input())
y = int(input())

for i in range(x, y):
    if i % 2 == 0:
        count = count + 1

print(count)
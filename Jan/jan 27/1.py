import sys

n = int(input())

sum_val = n * (n + 1) // 2
if sum_val % 2:
    print("NO")
    sys.exit()

sum_val = sum_val // 2
array = set()
for i in range(1, n + 1):
    array.add(i)

array2 = []
cnt = 0
for i in range(n, 0, -1):
    if sum_val - i >= 0:
        sum_val = sum_val - i
        array2.append(i)
        cnt += 1
        array.discard(i)

if sum_val > 0:
    cnt += 1
    array2.append(sum_val)
    array.discard(sum_val)

print("YES")
print(cnt)
for i in array2:
    print(i, end=" ")
print()
print(n - cnt)
for i in array:
    print(i, end=" ")

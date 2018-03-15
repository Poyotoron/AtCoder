n = int(input())
a = list(map(int, input().split()))
allp = 3 ** n
nop = 1
for i in range(n):
	if a[i] % 2 == 0:
		nop *= 2

print(allp - nop)
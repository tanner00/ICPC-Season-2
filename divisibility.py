t = int(input())
for i in range(t):
	x, y = [int(v) for v in input().split(' ')]
	if x % y == 0:
		print(0)
	else:
		print(y - (x % y))

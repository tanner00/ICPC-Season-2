# Author: Tanner Willis
# Date: 4/20
# Class: CS485
# Usage: python3 dogwalking.py

# Sample input:
# 2
# 4 2
# 3 5 1 1
# 5 4
# 30 40 20 41 50
# Output:
# 2
# 1

for _ in range(int(input())):
	_, k = [int(x) for x in input().split(" ")]
	v = sorted([int(x) for x in input().split(" ")])
	n = len(v)

	diff = (n - 1) * [0]
	for i in range(0, n - 1):
		diff[i] = v[i + 1] - v[i]
	diff = sorted(diff)

	minrange = 0
	for i in range(n - k):
		minrange += diff[i]
	print(minrange)

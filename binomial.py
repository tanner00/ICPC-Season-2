def binomial(n, k):
    if 0 <= k <= n:
        ntok = 1
        ktok = 1
        for t in range(1, min(k, n - k) + 1):
            ntok *= n
            ktok *= t
            n -= 1
        return ntok // ktok
    else:
        return 0

t = int(input())
for _ in range(t):
	n = int(input())
	v = [int(v) for v in input().split()]
	sorted(v)
	
	cnt = 0
	for i in range(0, n):
		j = 0
		while j < n and v[j] <= v[i]:
			if binomial(v[i], v[j]) % 2 != 0:
				cnt += 1
			j += 1
	print(cnt)

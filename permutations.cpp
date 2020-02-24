#include <bits/stdc++.h>

using namespace std;

typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	i32 n;
	cin >> n;
	if (n == 3 || n == 2) {
		cout << "NO SOLUTION\n";
		return 0;
	}

	vector<i32> p(n);
	p[n / 2] = n;
	i32 j = 0;
	for (int i = n / 2 - 1; i >= 0; --i) {
		p[i] = 2 * j + 1;
		++j;
	}
	j = 1;
	for (int i = n / 2 + 1; i < n; ++i) {
		p[i] = 2 * j;
		++j;
	}

	for (auto v : p) {
		cout << v << ' ';
	}

	return 0;
}

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
	vector<bool> a(n + 1);
	for (i32 i = 0; i < n - 1; ++i) {
		i32 x;
		cin >> x;
		a[x] = true;
	}

	for (i32 i = 1; i <= n; ++i) {
		if (!a[i]) {
			cout << i << '\n';
			return 0;
		}
	}

	return 0;
}

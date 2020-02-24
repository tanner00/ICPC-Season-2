#include <bits/stdc++.h>

using namespace std;

typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	i64 n;
	cin >> n;
	while (n != 1) {
		cout << n << ' ';
		if (n & 1) {
			n = n * 3 + 1;
		} else {
			n = n / 2;
		}
	}
	cout << 1;

	return 0;
}

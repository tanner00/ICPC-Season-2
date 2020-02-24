#include <bits/stdc++.h>

using namespace std;

typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	i32 t;
	cin >> t;
	vector<pair<i32, i32>> q;
	for (i32 i = 0; i < t; ++i) {
		i32 x, y;
		cin >> x >> y;
		q.push_back(make_pair(x, y));
	}
	i32 size = 0;
	for (i32 i = 0; i < t; ++i) {
		size = max(size, max(q[i].first, q[i].second));
	}

	vector<vector<i32>> m(size, vector<i32>(size));

	for (auto v : m) {
		for (auto e : v) {
			cout << e << ' ';
		}
		cout << '\n';
	}

	return 0;
}

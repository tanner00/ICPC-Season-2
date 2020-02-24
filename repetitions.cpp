#include <bits/stdc++.h>

using namespace std;

typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	i32 cur_max = 1;
	i32 cur = 1;
	for (u32 i = 1; i < s.length(); ++i) {
		if (s[i] == s[i - 1]) {
			cur++;
		} else {
			cur = 1;
		}
		cur_max = max(cur_max, cur);
	}

	cout << cur_max << '\n';

	return 0;
}

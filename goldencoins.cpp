// Problem: https://atcoder.jp/contests/abc160/tasks/abc160_b
// Type: Math / Greedy

#include <bits/stdc++.h>

using namespace std;

typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x;
	cin >> x;
	
	int mh = (x / 500) * 1000 + ((x % 500) / 5) * 5;
	
	cout << mh;

	return 0;
}

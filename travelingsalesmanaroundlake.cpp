// Problem: https://atcoder.jp/contests/abc160/tasks/abc160_c
// Type: Math

#include <bits/stdc++.h>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int k, n;
	cin >> k >> n;

	vector<int> m(n);
	for (auto &e : m) {
		cin >> e;
	}

	// If we can start at any position, this means we can delete one
	// edge from this circular graph because we have to visit
	// everything once
	// We should delete the largest distance between two points
	// to get the minimal distance
	int max_segment = 0;
	for (int i = 1; i < m.size(); ++i) {
		max_segment = max(max_segment, m[i] - m[i - 1]);
	}
	int np_d = m[0] + (k - m.back());
	max_segment = max(max_segment, np_d);
	cout << k - max_segment;

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;

	// Greatest value that doesn't go over
	// so sort by greatest first
	multiset<int, greater<int>> h;
	for (int i = 0; i < n; ++i) {
		int hi;
		cin >> hi;
		h.insert(hi);
	}

	for (int i = 0; i < m; ++i) {
		int ti;
		cin >> ti;
		
		// Get the first value in the range that doesn't go over ti
		auto it = h.lower_bound(ti);
		if (it != h.end()) {
			cout << *it << '\n';
			h.erase(it);
		} else {
			cout << "-1\n";
		}
	}
	
	return 0;
}

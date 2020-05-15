#include <bits/stdc++.h>

using namespace std;

// method: sort and use two pointers

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, m, k;
	cin >> n >> m >> k;
	
	vector<int> a(n);
	for (auto &e : a) {
		cin >> e;
	}
	vector<int> b(m);
	for (auto &e : b) {
		cin >> e;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	// size is acceptable between x - k and x + k
	int i = 0;
	int j = 0;
	int matched = 0;
	while (i < a.size() && j < b.size()) {
		if (a[i] < b[j] - k) {
			// if the apartment is too big even with
			// the size allowance, you're too far on
			// the list. just move past the tenant.
			++i;
		} else if (a[i] > b[j] + k) {
			// if the apartment is too small even
			// with the size allowance, you should
			// try to satisfy the tenant with the next
			// apartment. move past the apartment.
			++j;
		} else {
			// the tenant is happy. mark the tenant
			// and the apartment off the list.
			++i;
			++j;
			++matched;
		}
	}
	cout << matched << '\n';

	return 0;
}

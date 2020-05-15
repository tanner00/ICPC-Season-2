#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> k(n);
	for (auto &e : k) {
		cin >> e;
	}
	
	multiset<int> pq;
	for (int i = 0; i < n; ++i) {
		int ke = k[i];
		auto replace = pq.upper_bound(ke);
		if (replace == pq.end()) {
			pq.insert(ke);
		} else {
			pq.erase(replace);
			pq.insert(ke);
		}
	}
	
	cout << pq.size() << '\n';
	
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	uint64_t z;
	cin >> z;
	while (z--) {
		uint64_t n, k;
		cin >> n >> k;
		vector<uint64_t> a(n);
		for (auto &e : a) {
			cin >> e;
		}
		sort(a.begin(), a.end(), greater<uint64_t>());
		uint64_t bottleneck = k == 0 ? 0 : a[0];
		uint64_t s = 0;
		for (uint64_t i = k; i < a.size(); ++i) {
			s += a[i];
		}
		cout << max(s, bottleneck) << '\n';
	}
	
	
	return 0;
}

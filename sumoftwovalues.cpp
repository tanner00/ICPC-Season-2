#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, x;
	cin >> n >> x;

	vector<pair<int, int>> v;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		pair<int, int> e = {x, i};
		v.push_back(e);
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < n; ++i) {
		auto e = v[i];
		int target = x - e.first;
		
		int l = 0;
		int r = n - 1;
		while (l <= r) {
			int mi = l + (r - l) / 2;
			auto me = v[m];

			if (me.first == target && mi != i) {
				cout << me.second + 1 << ' ' << e.second + 1 << '\n';
				goto done;
			}
			if (me.first >= target) {
				r = m - 1;
			}
			if (me.first < target) {
				l = m + 1;
			}
		}
	}
	cout << "IMPOSSIBLE\n";
	done:
	return 0;
}


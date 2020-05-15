#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		vector<pair<int, int>> pc(n);
		for (auto &e : pc) {
			cin >> e.first >> e.second;
		}
		
		// this function should always be increasing
		// the increase in clears should never be more
		// than the increase in plays
		bool flag = pc[0].first >= pc[0].second;
		auto last = pc[0];
		for (int i = 0; i < n; ++i) {
			auto cur = pc[i];
			flag &= last.first <= cur.first && last.second <= cur.second &&
					cur.second - last.second <= cur.first - last.first;
			if (!flag) {
				break;
			}
			last = cur;
		}
		
		if (flag) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<int> p(n);
	for (auto &e : p) {
		cin >> e;
	}
	sort(p.begin(), p.end());
	
	int median = p[(p.size() - 1) / 2];
	
	int64_t cost = 0;
	for (auto e : p) {
		cost += abs(median - e);
	}
	cout << cost << '\n';
	
	return 0;
}

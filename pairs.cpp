#include <bits/stdc++.h>

using namespace std;

bool is_valid(vector<pair<int, int>> &v, unordered_set<int> &bad) {
	int not0 = *bad.begin();
	int cand0 = v[not0].first;
	int cand1 = v[not0].second;
	int cnt0 = 0;
	int cnt1 = 0;
	for (auto b : bad) {
		if (v[b].first == cand0 || v[b].second == cand0) {
			++cnt0;
		}
		if (v[b].first == cand1 || v[b].second == cand1) {
			++cnt1;
		}
	}
	return cnt0 == bad.size() || cnt1 == bad.size();
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int m, n;
	cin >> n >> m;
	
	vector<pair<int, int>> v(m);
	for (auto &e : v) {
		cin >> e.first >> e.second;
	}

	int a0 = v[0].first;
	unordered_set<int> bad_a;
	int b0 = v[0].second;
	unordered_set<int> bad_b;
	for (int i = 0; i < m; ++i) {
		if (v[i].first != a0 && v[i].second != a0) {
			bad_a.insert(i);
		}
		if (v[i].first != b0 && v[i].second != b0) {
			bad_b.insert(i);
		}
	}

	if (bad_a.size() == 0 || bad_b.size() == 0) {
		cout << "YES\n";
	} else if (is_valid(v, bad_a)) {
		cout << "YES\n";
	} else if (is_valid(v, bad_b)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	// assume v[0].first is the valid one
		// does anything make up for v[0].first's bad spots?
	// assume v[0].second is the valid one
		// does anything make up for v[0].second's bad spots?
	// if either of those is true "YES"
	// if not, "NO"
	
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	for (int q = 0; q < t; ++q) {
		int n;
		cin >> n;
		vector<vector<int>> m(n, vector<int>(n));
		for (auto &v : m) {
			for (auto &e : v) {
				cin >> e;
			}
		}
		
		int k = 0;
		for (int i = 0; i < n; ++i) {
			k += m[i][i];
		}
		
		int r = 0, c = 0;
		for (int j = 0; j < n; ++j) {
			unordered_set<int> in_row;
			for (int i = 0; i < n; ++i) {
				if (in_row.find(m[j][i]) != in_row.end()) {
					r += 1;
					break;
				} else {
					in_row.insert(m[j][i]);
				}
			}
		}
		for (int i = 0; i < n; ++i) {
			unordered_set<int> in_col;
			for (int j = 0; j < n; ++j) {
				if (in_col.find(m[j][i]) != in_col.end()) {
					c += 1;
					break;
				} else {
					in_col.insert(m[j][i]);
				}
			}
		}
		
		cout << "Case #" << q + 1 << ": " << k << ' ' << r << ' ' << c << '\n';
	}
	
	return 0;
}

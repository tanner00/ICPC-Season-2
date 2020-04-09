#include <bits/stdc++.h>

using namespace std;

// @NOTE: this is SOOOOOOOOOO bad, if you look at the problem you can just
// paint (0,0) as W and satisfy the equality...

pair<int, int> check(vector<vector<bool>> &v, int n, int m, pair<int, int> &firstWhite) {
	int w = 0;
	int b = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int e = v[i][j];
			if (firstWhite == make_pair(-1, -1) && e == 0) {
				firstWhite = {i, j};
			}
			bool passed = false;
			if (i != 0) {
				if (v[i - 1][j] != e) {
					passed = true;
				}
			}
			if (j != 0) {
				if (v[i][j - 1] != e) {
					passed = true;
				}
			}
			if (i != n - 1) {
				if (v[i + 1][j] != e) {
					passed = true;
				}
			}
			if (j != m - 1) {
				if (v[i][j + 1] != e) {
					passed = true;
				}
			}
			
			if (passed) {
				if (e == 1) {
					b += 1;
				} else {
					w += 1;
				}
			}
		}
	}
	return {w, b};
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;
		
		vector<vector<bool>> v(n, vector<bool>(m));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if ((i + j) % 2 != 0) {
					continue;
				}
				v[i][j] = 1;
			}
		}
		
		pair<int, int> c;
		do {
			pair<int, int> fw = {-1, -1};
			c = check(v, n, m, fw);
			if (c.first + 1 != c.second) {
				v[fw.first][fw.second] = 1;
			}
		} while (c.first + 1 != c.second);
		
		for (auto m : v) {
			for (auto e : m) {
				cout << ((e == 1) ? 'B' : 'W');
			}
			cout << '\n';
		}
	}
	
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		int m = 0;
		for (auto &e : a) {
			cin >> e;
			m = max(m, e);
		}
		sort(a.begin(), a.end());
		vector<bool> b(10000);
		for (auto e : a) {
			b[e] = true;
		}
		
		int firstfalse = 0;
		for (int i = 1; i < b.size(); ++i) {
			int e = b[i];
			if (e == false) {
				firstfalse = i;
				break;
			}
		}	
		
		for (int i = 0; i < x; ++i) {
			for (int j = firstfalse; j < b.size(); ++j) {
				if (b[j] == false) {
					b[j] = true;
					firstfalse = j;
					break;
				}
			}
		}
		
		int cnt = 0;
		for (int i = 1; i < b.size(); ++i) {
			int e = b[i];
			if (e == false) {
				break;
			}
			cnt++;
		}
		cout << cnt << '\n';
	}
	
	return 0;
}

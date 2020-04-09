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
		vector<int> a(n);
		int smallestplus = 100000000;
		int smallestminus = 100000000;
		int i = 0;
		for (auto &e : a) {
			cin >> e;
			if (e < 0) {
				smallestminus = min(i, smallestminus);
			}
			if (e > 0) {
				smallestplus = min(i, smallestplus);
			}
			++i;
		}
		vector<int> b(n);
		for (auto &e: b) {
			cin >> e;
		}

		bool flag = true;
		for (int i = n - 1; i >= 0; --i) {
			if (a[i] > b[i]) {
				flag &= smallestminus < i;
			} else if (a[i] < b[i]) {
				flag &= smallestplus < i;
			}
		}
		cout << (flag ? "YES" : "NO") << '\n';
	}
	
	return 0;
}

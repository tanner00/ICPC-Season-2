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
		vector<int> x(n);
		for (auto &e : x) {
			char c;
			cin >> c;
			e = c - '0';
		}
		
		vector<int> a(n);
		vector<int> b(n);
		bool found1 = false;
		for (int i = 0; i < x.size(); ++i) {
			if (found1) {
				b[i] = x[i];
				continue;
			}
		
			if (x[i] == 0) {
				a[i] = 0;
				b[i] = 0;
			} else if (x[i] == 1) {
				a[i] = 1;
				b[i] = 0;
				found1 = true;
			} else {
				a[i] = 1;
				b[i] = 1;
			}
		}

		for (auto e : a) {
			cout << e;
		}
		cout << '\n';
		for (auto e : b) {
			cout << e;
		}
		cout << '\n';
	}

	return 0;
}

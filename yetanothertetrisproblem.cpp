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
		int x;
		cin >> x;
		bool valid = true;
		bool is_even = x % 2 == 0;
		for (int i = 0; i < n - 1; ++i) {
			cin >> x;
			if (is_even && (x % 2 != 0) || !is_even && (x % 2 == 0)) {
				valid = false;
			}
		}
		cout << (valid ? "YES\n" : "NO\n");
	}

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	for (int q = 0; q < t; ++q) {
		string s;
		cin >> s;
		vector<int> a(s.size());
		for (int i = 0; i < s.size(); ++i) {
			a[i] = s[i] - '0';
		}
		
		string new_s;
		for (int i = 0; i < a.size(); ++i) {
			int d = a[i] - ((i - 1) >= 0 ? a[i - 1] : 0);
			if (d > 0 && a[i] > 0) {
				while (d) {
					new_s += '(';
					--d;
				}
			}
			if (d < 0) {
				while (d) {
					new_s += ')';
					++d;
				}
			}
			new_s += a[i] + '0';
		}
		int last = a[a.size() - 1];
		for (int i = 0; i < last; ++i) {
			new_s += ')';
		}
		
		cout << "Case #" << q + 1 << ": " << new_s << '\n';
	}
	
	return 0;
}

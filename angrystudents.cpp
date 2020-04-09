#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		string s;
		cin >> s;
		
		int ps = 0;
		int maxps = 0;
		for (int i = k - 1; i >= 0; --i) {
			if (s[i] == 'P') {
				++ps;
			} else {
				maxps = max(ps, maxps);
				ps = 0;
			}
		}
		
		cout << maxps << '\n';
	}
	
	return 0;
}

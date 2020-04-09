#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		bool is_plus = false;
		for (int j = 0; j < s.size(); ++j) {
			is_plus |= s[j] == '+';
		}
		
		x += (is_plus) ? 1 : -1;
	}
	
	cout << x << '\n';
	
	return 0;
}

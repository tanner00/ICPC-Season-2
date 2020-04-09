#include <bits/stdc++.h>
 
using namespace std;

// Use suffix sums

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string s;
		cin >> s;
		
		// this exact repeat will happen "count[pi - 1]" times
		vector<int> count(n);
		for (int i = 0; i < m; ++i) {
			int pi;
			cin >> pi;
			count[pi - 1] += 1;
		}
		
		// accumulate the suffixes of repeats
		// if i have to do count[i] over again, that means i'm going to have
		// to do count[i - 1] over again too
		for (int i = n - 1; i > 0; --i) {
			count[i - 1] += count[i];
		}

		// apply the suffix sums
		vector<int> pressed(26);
		for (int i = 0; i < n; ++i) {
			pressed[s[i] - 'a'] += count[i] + 1;
		}
		
		for (auto cnt : pressed) {
			cout << cnt << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}

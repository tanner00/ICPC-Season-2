// Problem: https://maps20.kattis.com/problems/maps20.keywords
// Type: Ad-hoc

#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	cin.get();

	map<string, int> m;
	for (int i = 0; i < n; ++i) {
		string f;
		string s;
		getline(cin, s);
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '-') {
				f += ' ';
			} else {
				f += tolower(s[i]);
			}
		}
		m[f] = 1;
	}

	int t = 0;
	for (auto v : m) {
		t += v.second;
	}
	cout << t << '\n';

	return 0;
}

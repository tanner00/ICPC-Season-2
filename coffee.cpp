// Problem: https://atcoder.jp/contests/abc160/tasks/abc160_a
// Type: Ad-hoc

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	cout << (s[2] == s[3] && s[4] == s[5] ? "Yes" : "No");

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	sort(s.begin(), s.end());

	vector<string> ses;	
	do {
		ses.push_back(s);
	} while (next_permutation(s.begin(), s.end()));
	
	cout << ses.size() << '\n';
	for (auto v : ses) {
		cout << v << '\n';
	}
	
	return 0;
}

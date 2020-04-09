#include <bits/stdc++.h>

using namespace std;

// finish using dp and slow O(n^3)

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	vector<pair<char, int>> o;
	int c = 0;
	for (int i = 0; i < s.size(); ++i) {
		char c = s[i];
		
		if (c == 'Q') {
			++nq;
			
			if (nq >= 2 && na >= 1) {
				
			}
		} else if (c == 'A') {
			++na;
		}
	}
	cout << c;
	
	return 0;
}

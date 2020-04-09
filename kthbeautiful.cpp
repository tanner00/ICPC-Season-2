#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		
		string s(n, 'a');
		/*
			1. a   a   a  [b]  b
			2. a   a  [b]  a   b
			3. a   a  [b]  b   a
			4. a  [b]  a   a   b
			5. a  [b]  a   b   a
			6. a  [b]  b   a   a
			7. [b] a   a   a   b
			8. [b] a   a   b   a
			9. [b] a   b   a   a
			a. [b] b   a   a   a
		*/
		for (int i = 0; i < n - 1; ++i) {
			if (k <= i + 1) {
				s[n - i - 2] = 'b';
				s[n - k] = 'b';
				break;
			}
			k -= i + 1;
		}
		
		cout << s << '\n';
	}

	return 0;
}

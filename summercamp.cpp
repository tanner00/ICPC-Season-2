#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
    string s;
    int i = 1;
    while (s.size() < 1000) {
        s += to_string(i);
        ++i;
    }

    int n;
    cin >> n;
    cout << s[n - 1] << '\n';

	return 0;
}

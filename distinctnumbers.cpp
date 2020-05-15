#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	set<int> x;
	for (int i = 0; i < n; ++i) {
		int v;
		cin >> v;
		x.insert(v);
	}
	
	cout << x.size() << '\n';
	
	return 0;
}

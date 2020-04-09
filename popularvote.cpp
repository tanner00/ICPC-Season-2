#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	
	vector<int> a(n);
	int total = 0;
	for (auto &ai : a) {
		cin >> ai;
		total += ai;
	}
	
	const double f = ((1.0 / 4) * (1.0 / m) * total);
	int cnt = 0;
	for (auto ai : a) {
		if (ai >= f) {
			++cnt;
		}
	}
	
	cout << (cnt >= m ? "Yes" : "No") << '\n';
	
	return 0;
}

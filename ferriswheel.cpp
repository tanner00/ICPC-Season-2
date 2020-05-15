#include <bits/stdc++.h>

using namespace std;

// method: sort and two pointers

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, x;
	cin >> n >> x;
	vector<int> p(n);
	for (auto &e : p) {
		cin >> e;
	}
	sort(p.begin(), p.end());

	int cnt = 0;
	int i = 0;
	int j = p.size() - 1;
	while (i <= j) {
		// try to match the lightest child with the heaviest child
		// if they dont match, the heaviest child needs their own
		// and keep trying to match the lighter child
		if (p[i] + p[j] <= x) {
			++i;
			--j;
		} else {
			--j;
		}
		++cnt;
	}
	cout << cnt << '\n';
	
	return 0;
}

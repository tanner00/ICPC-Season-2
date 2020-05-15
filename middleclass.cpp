#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		
		vector<int> a(n);
		for (auto &e : a) {
			cin >> e;
		}
		sort(a.rbegin(), a.rend());
		
		int count = 0;
		double avg = 0;
		int good = 0;
		// Greedily pair people together
		// until their average goes down
		// then start a new group
		for (int i = 0; i < a.size(); ++i) {
			if ((avg + a[i]) / (count + 1) < x) {
				count = 1;
				avg = a[i];
			} else {
				avg += a[i];
				count += 1;
				++good;
			}
		}
		
		cout << good << '\n';
	}
	
	return 0;
}

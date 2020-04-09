#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<int> pa;
		pa[a[0] - 1] = 1;
		vector<int> pb;
		// want to enforce 1*0* in O(1)
		// if 1*0* was true at t
		// then if a[i] == 1 && i == extent + 1
		// then good
		// extent += 1 (extent = len of permutation)
		// count num elements out of extent
		// if out of extent = 0, good permutation
		// if both are good permutations and extents = n, valid
		for (int i = 1; i < n; ++i) {
			pb[a[i] - 1] += 1;
		}	
		
		vector<pair<int, int>> ways;
		cout << ways.size() << '\n';
		for (auto w : ways) {
			cout << w.first << ' ' << w.second << '\n';
		}
	}
	
	return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

int check_array(vector<int> &v) {
	int forward_ones = 0;
	for (auto e : v) {
		if (e == 1) {
			++forward_ones;
		} else {
			break;
		}
	}
	for (int i = forward_ones; i < v.size(); ++i) {
		if (v[i] != 0) {
			return 0;
		}
	}
	return forward_ones;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<int> pa(n);
		vector<int> pb(n);
		for (int i = 1; i < n; ++i) {
			pb[a[i] - 1] += 1;
		}
		pa[a[0] - 1] = 1;

		vector<pair<int, int>> ways;

		int c1 = check_array(pa);
		int c2 = check_array(pb);
		if (c1 + c2 == n) {
			ways.push_back({1, n - 1});
		}
		
		for (int i = 1; i < n; ++i) {
			int e = a[i];
			pb[e - 1] -= 1;
			pa[e - 1] += 1;
			
			c1 = check_array(pa);
			c2 = check_array(pb);
			
			if (c1 + c2 == n) {
				ways.push_back({i + 1, n - 1 - i});
			}
		}
		
		cout << ways.size() << '\n';
		for (auto w : ways) {
			cout << w.first << ' ' << w.second << '\n';
		}
	}
	
	return 0;
}
*/

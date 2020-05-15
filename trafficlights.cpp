#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	/*int x, n;
	cin >> x >> n;
	vector<int> p(n);
	for (auto &e : p) {
		cin >> e;
	}*/

	vector<int> a = {3, 5, 1, 4, 8, 6, 9};
	sort(a.begin(), a.end());
	for (auto e : a) {
		cout << e << ' ';
	}
	cout << '\n';
	// upper bound finds the last position we can insert value into
	// without changing the order of the sorted data
	cout << upper_bound(a.begin(), a.end(), 6) - a.begin() << '\n';

	return 0;
}
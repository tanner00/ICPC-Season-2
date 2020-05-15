#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	vector<pair<int, int>> ab(n);
	while (n--) {
		cin >> ab[n].first >> ab[n].second;
	}
	// Sort by starting times
	sort(ab.begin(), ab.end());

	size_t ms = 0;
	set<int> endings;
	for (auto e : ab) {
		int ts = e.first;
		int te = e.second;
		endings.insert(te);
		
		// If an element's time is before the current start time,
		// remove it. They left.
		for (auto e : endings) {
			if (e < ts) {
				endings.erase(e);
			} else {
				break;
			}
		}
		
		ms = max(ms, endings.size());
	}
	cout << ms << '\n';
	
	return 0;
}

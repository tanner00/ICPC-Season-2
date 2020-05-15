#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<pair<int, int>> ab(n);
	while (n--) {
		cin >> ab[n].second >> ab[n].first;
	}
	// Sort by ending times for the optimal schedule
	sort(ab.begin(), ab.end());
	
	size_t movies = 0;
	int last_end = 0;
	for (auto e : ab) {
		// If the current movie's starting time is greater than
		// the last movie's ending time, we can watch it fully
		// Otherwise, ignore it
		if (e.second >= last_end) {
			++movies;
			last_end = e.first;
		}
	}
	cout << movies << '\n';
	
	return 0;
}

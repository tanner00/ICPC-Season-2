#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<int> x(n);
	for (auto &e : x) {
		cin >> e;
	}
	
	int64_t current_sum = 0;
	int64_t best_sum = 0;
	for (int i = 0; i < n; ++i) {
		current_sum += x[i];
		if (current_sum < 0) {
			current_sum = max(0, x[i]);
		}
		best_sum = max(best_sum, current_sum);
	}
	// nothing looked good to take, just take the min
	if (best_sum == 0) {
		best_sum = *min_element(x.begin(), x.end());
	}
	cout << best_sum << '\n';
	
	return 0;
}

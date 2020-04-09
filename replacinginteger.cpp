#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int64_t n, k;
	cin >> n >> k;

	// we take the smaller of these two values:
	// n % k is what we'd be left over with if we stopped before negatives
	// k - (n % k) is what we'd be left over with (positive) if we did one more
	cout << min(n % k, k - (n % k));
	// also could be (makes more sense to me with above):
	// min(n % k, abs((n % k) - k))
	
	return 0;
}

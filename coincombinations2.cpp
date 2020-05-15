#include <bits/stdc++.h>

using namespace std;

const int64_t MOD = 1000000007;

int main() {

	int64_t n, x;
	cin >> n >> x;
	vector<int64_t> coins(n);
	for (auto &e : coins) {
		cin >> e;
	}

	// @NOTE: Knapsack DP

	// 3 9
	// 2 3 5
	// [0] = 1
	// [1] = 0
	// [2] = 1
	// [3] = 1
	// [4] = 1
	// [5] = 2
	// [6] = 1
	// [7] = 1
	// [8] = 3
	// [9] = 3 = [9 - 2] + [9 - 3] + [9 - 5] = [7] + [6] + [4] = 1 + 1 + 1
	// To get 9, I want to know how many ways I could get to 9 - c and sum
	// them all up because now I can use that coin to get to 9 (there is one
	// way to do that, because no reordering is allowed).

	// @TODO: do this top-down O(mn)

	// How many ways can I make `amount`
	vector<int64_t> dp(x + 1);
	dp[0] = 1;
	for (auto c : coins) {
		// What values can I make using this new coin?
		for (int i = 1; i <= x; ++i) {
			if (c <= i) {
				dp[i] = (dp[i] + dp[i - c]) % MOD;
			}
		}
	}
	cout << dp[x] << '\n';

	return 0;
}
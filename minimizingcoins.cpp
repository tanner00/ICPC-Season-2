#include <bits/stdc++.h>

using namespace std;

const int64_t MOD = 1000000007;
const int64_t INF = 0x3f3f3f3f;

int main() {

    int64_t n, x;
    cin >> n >> x;

    vector<int64_t> coins(n);
    for (auto &c : coins) {
        cin >> c;
    }

    vector<int64_t> dp(x + 1, INF);
    for (auto c : coins) {
        if (c <= x)
            dp[c] = 1;
    }
    for (int i = 1; i <= x; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }
    cout << (dp[x] == INF ? -1 : dp[x]) << '\n';

    return 0;
}
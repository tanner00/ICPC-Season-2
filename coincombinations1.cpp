#include <bits/stdc++.h>

using namespace std;

const int64_t MOD = 1000000007;

int main() {

    int64_t n, x;
    cin >> n >> x;
    vector<int64_t> coins(n);
    for (auto &c : coins) {
        cin >> c;
    }
    
    vector<int64_t> dp(x + 1);
    for (auto c : coins) {
        if (c <= x)
            dp[c] = 1;
    }
    for (int64_t i = 1; i <= x; ++i) {
        for (auto c : coins) {
            if (i - c < 0)
                continue;

            dp[i] = (dp[i] + dp[i - c]) % MOD;
        }
    }
    cout << dp[x] << '\n';

    return 0;
}
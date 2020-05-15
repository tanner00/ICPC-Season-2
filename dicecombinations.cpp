#include <bits/stdc++.h>

using namespace std;

const int64_t MOD = 1000000007;

int main() {

    int64_t n;
    cin >> n;

    vector<int64_t> dp(n + 1);
    for (int i = 1; i <= 6 && i <= n; ++i) {
        dp[i] = 1;
    }

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= 6 && i - j >= 0; ++j) {
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }

    cout << dp[n] << '\n';

    return 0;
}
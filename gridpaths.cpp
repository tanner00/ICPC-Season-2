#include <bits/stdc++.h>

using namespace std;

const int64_t MOD = 1000000007;

int main() {

    int n;
    cin >> n;
    vector<string> grid(n);
    for (auto &s : grid) {
        cin >> s;
    }

    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        if (grid[i][0] == '*') {
            break;
        }
        dp[i][0] = 1;
    }
    for (int i = 0; i < n; ++i) {
        if (grid[0][i] == '*') {
            break;
        }
        dp[0][i] = 1;
    }
    
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] != '*')
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    }
    cout << dp[n - 1][n - 1] << '\n';

    return 0;
}
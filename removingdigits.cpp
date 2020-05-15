#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> m;

const int64_t INF = 0x3f3f3f3f;

int dp(int x) {
    if (x < 0) return INF;
    if (m.find(x) != m.end())
        return m[x];
    string xs = to_string(x);
    m[x] = INF;
    for (int i = 0; i < xs.size(); ++i) {
        int v = xs[i] - '0';
        m[x] = min(m[x], dp(x - v) + 1);
    }
    return m[x];
}

int main() {

    int n;
    cin >> n;

    m[0] = 0;
    cout << dp(n) << '\n';

    return 0;
}
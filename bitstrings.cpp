#include <bits/stdc++.h>

using namespace std;

using ull = uint64_t;
using ll = int64_t;

const ll MOD = 1000000007;

int modPow(ll a, ll b, int m) {
	ll ans = 1;
	ll e = a;
	while (b) {
		if (b & 1) {
			ans = (ans * e) % m;
		}
		e = (e * e) % m;
		b >>= 1;
	}
	return ans;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	ll n;
	cin >> n;
	cout << modPow(2, n, MOD);
	
	return 0;
}

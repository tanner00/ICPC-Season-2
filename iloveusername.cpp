#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	int x;
	cin >> x;
	int min_score = x, max_score = x;
	int amazing = 0;
	for (int i = 0; i < n - 1; ++i) {
		int x;
		cin >> x;
		if (x < min_score) {
			++amazing;
			min_score = x;
		} else if (x > max_score) {
			++amazing;
			max_score = x;
		}
	}
	cout << amazing << '\n';
	
	return 0;
}

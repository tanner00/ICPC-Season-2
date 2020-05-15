#include <bits/stdc++.h>

using namespace std;

// method: two pointers

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<int> k(n);
	for (auto &e : k) {
		cin >> e;
	}
	
	unordered_set<int> in;
	size_t maxsize = 0;
	size_t cursize = 0;
	size_t i = 0, j = 0;
	while (i < k.size() - 1 && j < k.size()) {
		if (in.find(k[j]) == in.end()) {
			in.insert(k[j]);
			++j;
			++cursize;
		} else {
			maxsize = max(maxsize, cursize);
			in.erase(in.find(k[i]));
			++i;
			--cursize;
		}
	}
	maxsize = max(maxsize, cursize);
	
	cout << maxsize << '\n';
	
	return 0;
}

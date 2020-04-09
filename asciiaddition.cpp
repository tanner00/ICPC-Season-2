#include <bits/stdc++.h>

using namespace std;

string chars[][7] = {
{
"xxxxx",
"x...x",
"x...x",
"x...x",
"x...x",
"x...x",
"xxxxx",
},
{
"....x",
"....x",
"....x",
"....x",
"....x",
"....x",
"....x",
},
{
"xxxxx",
"....x",
"....x",
"xxxxx",
"x....",
"x....",
"xxxxx",
},
{
"xxxxx",
"....x",
"....x",
"xxxxx",
"....x",
"....x",
"xxxxx",
},
{
"x...x",
"x...x",
"x...x",
"xxxxx",
"....x",
"....x",
"....x",
},
{
"xxxxx",
"x....",
"x....",
"xxxxx",
"....x",
"....x",
"xxxxx",
},
{
"xxxxx",
"x....",
"x....",
"xxxxx",
"x...x",
"x...x",
"xxxxx",
},
{
"xxxxx",
"....x",
"....x",
"....x",
"....x",
"....x",
"....x",
},
{
"xxxxx",
"x...x",
"x...x",
"xxxxx",
"x...x",
"x...x",
"xxxxx",
},
{
"xxxxx",
"x...x",
"x...x",
"xxxxx",
"....x",
"....x",
"xxxxx",
},
{
".....",
"..x..",
"..x..",
"xxxxx",
"..x..",
"..x..",
".....",
}
};

int compare_grid(const vector<string> &grid, int x, int y) {
	// read 5 chars right and 7 chars down
	for (int i = 0; i <= 10; ++i) {
		int match = 0;
		// char i
		for (int j = 0; j < 7; ++j) {
			if (grid[j].substr(x, 5) == chars[i][j]) {
				++match;
			}
		}
		if (match == 7) {
			return i;
		}
	}
	return -1;
}

pair<int, int> get_num(const vector<string> &grid, int i) {
	int d = 0;
	int n = 0;
	while ((d = compare_grid(grid, i, 0)) != 10 && i + 6 <= grid[0].size()) {
		n *= 10;
		n += d;
		i += 6;
	}
	return {n, i + 1};
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int l;
	vector<string> m(7);
	for (int i = 0; i < 7; ++i) {
		cin >> m[i];
		l = m[i].size();
	}
	
	auto p1 = get_num(m, 0);
	auto p2 = get_num(m, p1.second + 5);
	p2.first *= 10;
	p2.first += compare_grid(m, l - 5, 0);
	
	int s = p1.first + p2.first;
	
	int len = to_string(s).size();
	char output[7][len * 6 - 1];
	memset(output, '.', 7 * (len * 6 - 1));
	
	vector<int> r;
	while (s) {
		int d = s % 10;
		r.push_back(d);
		s /= 10;
	}
	reverse(r.begin(), r.end());
	
	for (int i = 0; i < r.size(); ++i) {
		int d = r[i];
		for (int k = 0; k < 7; ++k) {
			for (int j = 0; j < 5; ++j) {
				output[k][i * 6 + j] = chars[d][k][j];
			}
		}
	}
	
	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < len * 6 - 1; ++j) {
			cout << output[i][j];
		}
		cout << '\n';
	}
	
	return 0;
}

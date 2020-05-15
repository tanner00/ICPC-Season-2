#include <bits/stdc++.h>

using namespace std;

bool dfs(const vector<vector<char>> &map, vector<vector<bool>> &visited, int i,
	 int j) {
	if (i < 0 || i >= (int)map.size())
		return false;
	if (j < 0 || j >= (int)map[0].size())
		return false;
	if (visited[i][j])
		return false;
	if (map[i][j] == '#')
		return false;

	visited[i][j] = true;

	dfs(map, visited, i - 1, j);
	dfs(map, visited, i + 1, j);
	dfs(map, visited, i, j - 1);
	dfs(map, visited, i, j + 1);

	return true;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> map(n, vector<char>(m));
	for (auto &r : map) {
		for (auto &e : r) {
			cin >> e;
		}
	}

	int room_count = 0;
	vector<vector<bool>> visited(n, vector<bool>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			room_count += dfs(map, visited, i, j);
		}
	}
	cout << room_count << '\n';

	return 0;
}
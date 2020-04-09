#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	for (int q = 0; q < t; ++q) {
		int n;
		cin >> n;
		vector<pair<pair<int, int>, int>> times(n);
		int i = 0;
		for (auto &time : times) {
			cin >> time.first.first >> time.first.second;
			time.second = i;
			++i;
		}
		sort(times.begin(), times.end());
		
		string s;
		vector<pair<int, char>> smake;
		int jcan = 0;
		int ccan = 0;
		int last = times[0].first.first;
		for (auto time : times) {
			int update = time.first.first - last;

			jcan = max(jcan - update, 0);
			ccan = max(ccan - update, 0);
			
			if (ccan == 0) {
				smake.push_back({time.second, 'C'});
				ccan = time.first.second - time.first.first;
			} else if (jcan == 0) {
				smake.push_back({time.second, 'J'});
				jcan = time.first.second - time.first.first;
			} else {
				s = "IMPOSSIBLE";
				goto done;
			}

			last = time.first.first;
		}
		sort(smake.begin(), smake.end());
		for (auto c : smake) {
			s += c.second;
		}
done:
		cout << "Case #" << q + 1 << ": " << s << '\n';
		// original idea:
		// sort by earliest ending (this is optimal)
		// update time = difference between next event start and current event end
		// (annoying to have update time with ^ bc time goes negative sometimes...)
		// assign starting times to the vector<pair<int, char>> where (timeStart, person) is pair
		// sort by starting times
	}
	
	return 0;
}

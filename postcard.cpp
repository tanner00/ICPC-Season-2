#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int k;
	cin >> k;

	int num_repeats = 0;
	int num_deletes = 0;
	int normal_length = 0;
	int first_repeat = -1;
	for (int i = 0; i < s.size(); ++i) {
		char c = s[i];
		if (c == '*') {
			++num_repeats;
			if (first_repeat == -1) {
				first_repeat = i;
			}
		} else if (c == '?') {
			++num_deletes;
		} else {
			normal_length++;
		}
	}

	string news;
	if (normal_length == k) {
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '?' || s[i] == '*') {
				continue;
			}
			news += s[i];
		}
	} else if (normal_length > k) {
		if (normal_length - num_deletes - num_repeats > k) {
			cout << "Impossible\n";
			return 0;
		}
		int used_deletes = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '?' || s[i] == '*') {
				continue;
			}

			if (i < s.size() - 1 && normal_length - used_deletes != k) {
				if (s[i + 1] == '?' || s[i + 1] == '*') {
					++used_deletes;
				} else {
					news += s[i];
				}
			} else {
				news += s[i];
			}
		}
	} else {
		if (first_repeat == -1) {
			cout << "Impossible\n";
			return 0;
		}
		char endchar;
		for (int i = 0; i < first_repeat; ++i) {
			if (s[i] != '*' && s[i] != '?') {
				news += s[i];
				endchar = s[i];
			}
		}
		for (int i = 0; i < k - normal_length; ++i) {
			news += endchar;
		}
		for (int i = first_repeat + 1; i < s.size(); ++i) {
			if (s[i] != '*' && s[i] != '?') {
				news += s[i];
			}
		}
	}
	cout << news << '\n';

	return 0;
}

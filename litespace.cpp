// Problem: https://maps20.kattis.com/problems/maps20.litespace/
// Type: Ad-hoc

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> progstack;
	string s;
	cin >> s;

	int i = 0;
	while (i < s.size()) {
		char c1 = s[i];
		char c2 = s[i + 1];
		char c3 = s[i + 2];

		if (c1 == 'S') {
			if (c2 == 'S') {
				i += 2;
				bool positive = s[i] == 'S';
				i += 1;
				int length = 0;
				while (s[i + length] != 'N') {
					length += 1;
				}

				int n = 0;
				int mulfac = 1 << (length - 1);
				while (s[i] != 'N') {
					if (s[i] == 'T') {
						n += mulfac;
					}
					mulfac /= 2;
					i += 1;
				}

				i += 1;
				if (!positive) {
					n *= -1;
				}
				progstack.push(n);
			} else if (c2 == 'N') {
				if (c3 == 'S') {
					if (progstack.size() == 0) {
						cout << "Invalid copy "
							"operation\n";
					} else {
						progstack.push(progstack.top());
					}
					i += 3;
				} else if (c3 == 'T') {
					if (progstack.size() < 2) {
						cout << "Invalid swap "
							"operation\n";
					} else {
						int n1 = progstack.top();
						progstack.pop();
						int n2 = progstack.top();
						progstack.pop();
						progstack.push(n1);
						progstack.push(n2);
					}
					i += 3;
				} else if (c3 == 'N') {
					if (progstack.size() < 1) {
						cout << "Invalid remove "
							"operation\n";
					} else {
						progstack.pop();
					}
					i += 3;
				}
			}
		} else if (c1 == 'T') {
			char c4 = s[i + 3];

			if (c2 == 'S') {
				if (c3 == 'S') {
					if (c4 == 'S') {
						if (progstack.size() < 2) {
							cout << "Invalid "
								"addition "
								"operation\n";
						} else {
							int n1 =
								progstack.top();
							progstack.pop();
							int n2 =
								progstack.top();
							progstack.pop();
							progstack.push(n1 + n2);
						}
						i += 4;
					} else if (c4 == 'T') {
						if (progstack.size() < 2) {
							cout << "Invalid "
								"subtraction "
								"operation\n";
						} else {
							int n1 =
								progstack.top();
							progstack.pop();
							int n2 =
								progstack.top();
							progstack.pop();
							progstack.push(n2 - n1);
						}
						i += 4;
					} else if (c4 == 'N') {
						if (progstack.size() < 2) {
							cout << "Invalid "
								"multiplication"
								" operation\n";
						} else {
							int n1 =
								progstack.top();
							progstack.pop();
							int n2 =
								progstack.top();
							progstack.pop();
							progstack.push(n1 * n2);
						}
						i += 4;
					}
				} else if (c3 == 'T') {
					if (c4 == 'S') {
						if (progstack.size() < 2) {
							cout << "Invalid "
								"division "
								"operation\n";
						} else {
							int n1 =
								progstack.top();
							if (n1 == 0) {
								cout << "Divisi"
									"on by "
									"zero"
									"\n";
							} else {
								progstack.pop();
								int n2 =
									progstack
										.top();
								progstack.pop();
								progstack.push(
									n2 /
									n1);
							}
						}
						i += 4;
					}
				}
			} else if (c2 == 'N') {
				if (c3 == 'S') {
					if (c4 == 'T') {
						if (progstack.size() == 0) {
							cout << "Invalid print "
								"operation\n";
						} else {
							cout << progstack.top()
							     << '\n';
							progstack.pop();
						}
						i += 4;
					}
				}
			}
		}
	}

	return 0;
}

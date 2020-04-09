#include <bits/stdc++.h>

using namespace std;

int main() {

	// o + o = e
	// e + e = e

	int ne, no;
	cin >> no >> ne;
	int coo = (no * (no - 1)) / 2;
	int cee = (ne * (ne - 1)) / 2;
	cout << coo + cee << '\n';
	
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long u, v;
		cin >> u >> v;
		// view the image in this repository for derivation of formula
		cout << -(u * u) << " " << v * v << '\n';
	}
	return 0;
}

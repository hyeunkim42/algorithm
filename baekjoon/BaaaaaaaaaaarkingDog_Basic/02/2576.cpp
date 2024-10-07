#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tmp, sum = 0, m = 100;
	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp % 2) {
			m = min(m, tmp);
			sum += tmp;
		}
	}
	if (sum == 0) cout << "-1\n";
	else {
		cout << sum << '\n';
		cout << m << '\n';
	}
}
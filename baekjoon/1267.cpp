#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int cnt, len, y = 0, m = 0;

	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> len;
		y += (((len + 1) % 30 > 0) + (len / 30)) * 10;
		m += (((len + 1) % 60 > 0) + (len / 60)) * 15;
	}
	if (y > m) {
		cout << "M " << m << '\n';
	}
	else if (y < m) {
		cout << "Y " << y << '\n';
	}
	else {
		cout << "Y M " << y << '\n';
	}
}
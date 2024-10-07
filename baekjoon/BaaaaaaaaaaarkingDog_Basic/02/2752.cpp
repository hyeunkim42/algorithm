#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	int tmp;
	if (a > b) {
		tmp = b;
		b = a;
		a = tmp;
	}
	if (b > c) {
		tmp = c;
		c = b;
		b = tmp;
	}
	if (a > b) {
		tmp = b;
		b = a;
		a = tmp;
	}
	cout << a << ' ' << b << ' ' << c << '\n';
}
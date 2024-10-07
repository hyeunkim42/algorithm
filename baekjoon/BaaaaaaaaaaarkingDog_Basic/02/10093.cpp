#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ull a, b;
	cin >> a >> b;
	ull tmp;
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a != b)
		cout << (b - a - 1) << '\n';
	else
		cout << "0\n";
	for (ull i = a + 1; i < b; i++) {
		cout << i << ' ';
	}
	cout << '\n';
}
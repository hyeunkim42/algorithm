// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int by, bm, bd, dy, dm, dd;
	cin >> by >> bm >> bd >> dy >> dm >> dd;
	if (by == dy) {
		cout << "0\n1\n0\n";
	}
	else if (by < dy) {
		if (bm > dm) {
			cout << dy - by - 1 << '\n';
		}
		else if (bm == dm) {
			if (bd > dd)
				cout << dy - by - 1 << '\n';
			else
				cout << dy - by << '\n';
		}
		else {
			cout << dy - by << '\n';
		}
		cout << dy - by + 1 << '\n' << dy - by << '\n';
	}
}
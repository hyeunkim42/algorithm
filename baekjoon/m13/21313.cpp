// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	if (n % 2) {
		for (int i = 0; i < n; i++) {
			if (i % 2)
				cout << 2 << ' ';
			else {
				if (i == n - 1)
					cout << 3 << ' ';
				else
					cout << 1 << ' ';
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0)
				cout << 1 << ' ';
			else
				cout << 2 <<  ' ';
		}
	}
}
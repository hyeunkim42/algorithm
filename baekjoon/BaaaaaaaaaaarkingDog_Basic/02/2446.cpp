#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int j = 0;
		for (; j < i; j++) cout << ' ';
		for (; j < n; j++) cout << '*';
		for (j = n - 1; j > i; j--) cout << '*';
		cout << '\n';
	}
	for (int i = n - 1; i > 0; i--) {
		int j = 1;
		for (; j < i; j++) cout << ' ';
		for (; j < n; j++) cout << '*';
		cout << '*';
		for (; j > i; j--) cout << '*';
		cout << '\n';
	}
}
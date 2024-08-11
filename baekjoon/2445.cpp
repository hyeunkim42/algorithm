#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n;
	cin >> n;
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++) cout << '*';
		for (; j < n; j++) cout << ' ';
		for (; j > i; j--) cout << ' ';
		for (; j > 0; j--) cout << '*';
		cout << '\n';
	}
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) cout << '*';
		for (; j < n; j++) cout << ' ';
		for (; j > i; j--) cout << ' ';
		for (; j > 0; j--) cout << '*';
		cout << '\n';
	}
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, space;
	cin >> n;
	for (int i = 0; i < n; i++) {
		space = n - i - 1;
		for (int j = 0; j < space; j++) cout << ' ';
		for (int j = 0; j < i; j++) cout << '*';
		cout << '*';
		for (int j = 0; j < i; j++) cout << '*';
		cout << '\n';
	}
}
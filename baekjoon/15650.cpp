// #include <bits/stdc++.h>
#include <iostream>

int arr[8];
int used[8];
int n, m;

using namespace std;

void	func(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}
	for (int i = num; i <= n; i++) {
		if (!used[i]) {
			used[i] = true;
			arr[cnt] = i;
			func(i + 1, cnt + 1);
			used[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	func(1, 0);
}
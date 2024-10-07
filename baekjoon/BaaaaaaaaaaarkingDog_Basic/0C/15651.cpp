// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int arr[10] = {0, };
int n, m;

void func(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return ;
	}
	for (int i = 1; i <= n; i++) {
		arr[cnt] = i;
		func(cnt + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	func(0);
}
// #include <bits/stdc++.h>
#include <iostream>

using namespace std;
int n, m;
int arr[10];

void func(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return ;
	}
	for (int i = num; i <= n; i++) {
		arr[cnt] = i;
		func(i, cnt + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	func(1, 0);
}
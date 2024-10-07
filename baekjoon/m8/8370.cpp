// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int ans = 0;
	int n[2] = {0, }, k[2] = {0, };
	for (int i = 0; i < 2; i++) {
		cin >> n[i];
		cin >> k[i];
	}
	for (int i = 0; i < 2; i++) {
		ans += n[i] * k[i];
	}
	cout << ans << '\n';
}
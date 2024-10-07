// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k, ans = 1;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		ans *= n;
		n--;
	}
	for (int i = 1; i <= k; i++) {
		ans /= i;
	}
	cout << ans << '\n';
}
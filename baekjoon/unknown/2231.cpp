#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	for (int i = 1; i < n; i++){
		int sum = i;
		int tmp = i;
		while (tmp) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == n) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << "0\n";
}
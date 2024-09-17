#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	if (n == 1) {
		cout << "1\n";
		return 0;
	}
	else if (n == 2) {
		cout << "2\n";
		return 0;
	}
	for (int i = 2; i < n; i++) {
		int prev = 3 * (i-2) * (i-1) + 1;
		int curr = 3 * (i-1) *  i + 1;
		if (prev < n && n <= curr) {
			cout << i <<'\n';
			return 0;
		}
	}
}
// 1, 7, 19, 
// n 번째 고리의 마지막: 6*(n-1) + 1;
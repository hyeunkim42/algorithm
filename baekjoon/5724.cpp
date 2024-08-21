#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	int ans;

	while (1) {
		cin >> n;
		if (n == 0)
			break ;
		ans = 0;
		while (n) {
			ans += n*n;
			n--;
		}
		cout << ans << '\n';
	}
}
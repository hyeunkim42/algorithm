#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long k, n;
	cin >> k >> n;
	if (n == 1){
		cout << "-1\n";
		return 0;
	}
	long long res = (k * n) / (n-1);
	if ((k * n) % (n-1)) res++;
	cout << res << '\n';
}

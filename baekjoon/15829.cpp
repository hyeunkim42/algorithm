#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n; cin >> n;
	string str; cin >> str;
	const ll r = 31, M = 1234567891;
	ll res = 0;
	for (int i = 0; i < n; i++){
		ll tmp = (str[i] - 'a' + 1);
		ll cnt = i;

		while (cnt){
			tmp = (tmp * r)%M;
			cnt--;
		}
		res += tmp;
	}
	cout << res % M << "\n";
}
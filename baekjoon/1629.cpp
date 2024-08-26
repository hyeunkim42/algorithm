// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

typedef long long ll;

ll POW(ll a, ll b, ll c) {
	if (b == 1)
		return a % c;
	ll val = POW(a, b / 2, c);
	val = val * val % c;
	if (b % 2 == 0)
		return val;
	return val * a % c;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll a, b, c;
	cin >> a >> b >> c;
	// b번 호출되면서 b의 최대가 INT_MAX라 시간초과가 나는 코드
	// ll res = 1;
	// while (b--) {
	// 	res = res * a % c;
	// }
	cout << POW(a, b, c) << '\n';
}
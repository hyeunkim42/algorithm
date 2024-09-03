#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m;
    cin >> n >> m;
    cout << max(n, m) - min (n, m) << '\n';
}
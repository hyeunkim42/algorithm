#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define X first
#define Y second;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	stack<pair<int, int>> s;
	int n, h;
	ll ans = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		int cnt = 1;
		while (!s.empty() && s.top().X <= h) {
			ans += s.top().Y;
			if (s.top().X == h)
				cnt += s.top().Y;
			s.pop();
		}
		if (!s.empty())
			ans++;
		s.push({h, cnt});
	}
	cout << ans << '\n';
}
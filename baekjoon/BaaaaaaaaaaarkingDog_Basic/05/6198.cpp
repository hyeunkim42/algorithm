// A가 B를 내려다 볼 수 있다면, B는 A를 올려다볼 수 있다는 것.
// 2493번과 유사한 풀이가 가능해짐.

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	stack<int> building;
	int n, h;
	ll ans = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		while (!building.empty() && building.top() <= h)
			building.pop();
		ans += building.size();
		building.push(h);
	}
	cout << ans << '\n';
}
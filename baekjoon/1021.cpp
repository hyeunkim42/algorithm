#include <bits/stdc++.h>

using namespace std;

deque<int> D;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		D.push_back(i);
	}
	int m; cin >> m;
	int target, idx = 0, ans = 0;
	while (m--) {
		cin >> target;
		for (int i = 0; i < D.size(); i++) {
			if (D[i] == target) {
				idx = i;
				break ;
			}
		}
		if (idx <= D.size() / 2) {
			while (1) {
				if (D.front() == target) {
					D.pop_front();
					break ;
				}
				ans++;
				D.push_back(D.front());
				D.pop_front();
			}
		}
		else {
			while (1) {
				if (D.front() == target) {
					D.pop_front();
					break ;
				}
				ans++;
				D.push_front(D.back());
				D.pop_back();
			}
		}
	}
	cout << ans;
	return 0;
}
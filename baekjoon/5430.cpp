#include <bits/stdc++.h>

using namespace std;

deque<int> dq;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t; cin >> t;
	while (t--) {
		string p; cin >> p;
		int n; cin >> n;
		string tmp; cin >> tmp;
		for (int i = 0; i < tmp.length(); i++) {
			if (tmp[i] == ',' || tmp[i] == '[' || tmp[i] == ']')
				continue ;
			tmp.push_back(tmp[i] - '0');
		}
		int dir = 1;
		for (int i = 0; i < p.length(); i++) {
			if (p[i] == 'R') {
				dir *= -1;
			}
			else {
				if (!dq.size())
					break ;
				if (dir < 0) {
					dq.pop_back();
				}
				else
					dq.pop_front();
			}
		}
		if (!dq.size())
			continue ;
		cout << '[';
		if (dir < 0) {
			while (dq.size()) {
				cout << dq.back() << ',';
				dq.pop_back();
			}
		}
		else {
			while (dq.size()) {
				cout << dq.front() << ',';
				dq.pop_front();
			}
		}
		cout << "]\n";
	}
}
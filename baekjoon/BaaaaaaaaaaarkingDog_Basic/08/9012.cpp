#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	stack<int> ps;
	int t;
	string test;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> test;
		for (int x = 0; x < test.length(); x++) {
			if (test[x] == '(') ps.push(test[x]);
			else {
				if (!ps.size()) {
					ps.push(test[x]);
					break ;
				}
				else ps.pop();
			}
		}
		if (ps.size()) {
			cout << "NO\n";
		}
		else
			cout << "YES\n";
		while (ps.size()) ps.pop();
	}
}
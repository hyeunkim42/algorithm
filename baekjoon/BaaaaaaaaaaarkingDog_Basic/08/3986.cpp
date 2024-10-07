#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	stack<char> ab;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (ab.empty()) {
				ab.push(str[j]);
			}
			else {
				if (ab.top() == str[j])
					ab.pop();
				else
					ab.push(str[j]);
			}
		}
		if (ab.empty())
			cnt++;
		while (ab.size()) ab.pop();
	}
	cout << cnt << ' ';
}
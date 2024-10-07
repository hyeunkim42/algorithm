#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string str; cin >> str;
	stack<char> ps;
	int ans = 0, tmp = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			tmp *= 2;
			ps.push(str[i]);
		}
		else if (str[i] == '[') {
			tmp *= 3;
			ps.push(str[i]);
		}
		else {
			if (ps.empty()) {
				ans = 0;
				break ;
			}
			if (str[i] == ')') {
				if (str[i - 1] == '(')
					ans += tmp;
				tmp /= 2;
				if (ps.top() == '(')
					ps.pop();
				else {
					ans = 0;
					break ;
				}
			}
			else {
				if (str[i - 1] == '[')
					ans += tmp;
				tmp /= 3;
				if (ps.top() == '[')
					ps.pop();
				else {
					ans = 0;
					break ;
				}
			}
		}
	}
	if (ps.size())
		ans = 0;
	cout << ans << '\n';
}
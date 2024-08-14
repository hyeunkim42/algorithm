#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	string	str;
	stack<int> pipe;
	int ans = 0;

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			pipe.push(str[i]);
		else {
			pipe.pop();
			if (str[i - 1] == '(')
				ans++;
			else
				ans += pipe.size();
		}
	}
	cout << ans;
}
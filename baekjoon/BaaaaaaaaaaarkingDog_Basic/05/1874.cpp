#include <bits/stdc++.h>

using namespace std;

int target[100000];
stack<int> res;
string	op;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> target[i];
	}
	int i = 0, j = 1;
	for ( ; i < n; i++) {
		while (res.empty() == true || res.top() < target[i]) {
			op.push_back('+');
			res.push(j);
			j++;
		}
		if (res.top() == target[i]) {
			op.push_back('-');
			res.pop();
			continue ;
		}
		else 
			break ;
	}
	if (i != n) {
		cout << "NO\n";
		return 0;
	}
	for (int x = 0; x < op.length(); x++) {
		cout << op[x] << '\n';
	}
}
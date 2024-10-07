#include <bits/stdc++.h>

using namespace std;

int st[10000];
int pos = -1;

void	push() {
	int arg;
	cin >> arg;
	pos++;
	st[pos] = arg;
}

void	pop() {
	if (pos < 0) {
		cout << -1 << '\n';
		return ;
	}
	cout << st[pos] << '\n';
	pos--;
}

void	top() {
	if (pos < 0)
		cout << -1 << '\n';
	else
		cout << st[pos] << '\n';
}

int	main() {
	int n;
	string cmd;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") push();
		else if (cmd == "pop") pop();
		else if (cmd == "size") { cout << pos + 1 << '\n'; }
		else if (cmd == "empty") { if (pos < 0) cout << 1 << '\n'; else cout << 0 << '\n'; }
		else top();
	}
}